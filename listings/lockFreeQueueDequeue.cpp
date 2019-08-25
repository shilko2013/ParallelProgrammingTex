value_type * dequeue() {
	
	node_type * pNext;
	node_type * h;
	
	while (true) {
		h = m_pHead;
		pNext = h->m_pNext;
		
		// кто-то успел изменить связь между головой и следующим узлом
		if (m_pHead.load() != h)
			continue;
		
		//очередь пуста, голова всегда dummy node
		if (pNext == nullptr)
			return nullptr;
		
		//хвост оказался не продвинут, пытаемся продвинуть
		node_type * t = m_pTail.load();
		if (h == t) {
			m_pTail.compare_exchange_strong(t, pNext);
			continue;
		}
		
		//продвигаем голову
		if (m_pHead.compare_exchange_strong(h, pNext))
			break;
	}
	
	return pNext;
}
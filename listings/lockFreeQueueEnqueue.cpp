bool enqueue (value_type& val) {
	
	node_type * pNew = node_traits::to_node_ptr(val);
	node_type * t = m_pTail;
	
	while (true) {
		//продвижение хвоста
		node_type * pNext = t->m_pNext.load();
		if (pNext != nullptr) {
			m_pTail.compare_exchange_weak(t, pNext);
			continue;
		}
		
		//фактическая вставка нового элемента
		node_type * tmp = nullptr;
		if (t->m_pNext.compare_exchange_strong(tmp, pNew))
			break;
	}
	
	//попытка продвинуть хвост
	//в случае неудачи это сделает позже другой поток
	m_pTail.compare_exchange_strong(t, pNew);
	
	return true;
}
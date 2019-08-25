bool CAS(int *pAddr, int nExpected, int nNew) {
	if (LL(pAddr) == nExpected)
		return SC(pAddr, nNew);
	return false;
}
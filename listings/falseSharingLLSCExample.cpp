struct data {
	atomic_int nShared1;
	/* padding for cache line = 64 - sizeof(atomic_int) = 60 byte */
	char _padding1[60];
	atomic_int nShared2;
	/* padding for cache line=60 byte */
	char _padding2[60];
};
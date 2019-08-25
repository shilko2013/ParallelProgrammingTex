struct data {
	int volatile nShared1;
	/* padding for cache line=64 byte */
	char _padding1[64];
	int volatile nShared2;
	/* padding for cache line=64 byte */
	char _padding2[64];
};
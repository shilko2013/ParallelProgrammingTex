int i = 1;
#pragma omp parallel
{
	printf("Hello, world!");
	#pragma omp critical
	{ 
		i++;
		printf("i=%d\n", i);
	}
}
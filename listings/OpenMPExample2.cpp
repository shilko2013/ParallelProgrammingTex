int i = 1;
#pragma omp parallel
{
	printf("Hello, world!");
	#pragma omp atomic
	i++;
}
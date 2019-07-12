int i, sum = 0, sum_private = 0;
#pragma omp parallel private (sum_private)
{ 
    sum_private = 0;      /* repeated initialization! */
    #pragma omp for
    for (i = 0; i < 100; ++i)
        sum_private += i; 
    #pragma omp atomic
    sum += sum_private;
}
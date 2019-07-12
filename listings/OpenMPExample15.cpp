#pragma omp parallel for num_threads(2)
for(i = 1; i < 20; i++)
    a[i] = 2*a[i – 1];
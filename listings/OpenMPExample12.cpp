int i, sum = 0;
#pragma omp parallel for reduction (+:sum)
for (i = 0; i < 100; ++i)
    sum += i; 
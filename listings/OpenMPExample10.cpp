int i, sum = 0;
#pragma omp parallel for
for (i = 0; i < 100; ++i) /* error */
    sum += i;
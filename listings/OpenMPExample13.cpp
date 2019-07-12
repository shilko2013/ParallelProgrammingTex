int i; double sum = 0;
#pragma omp parallel for reduction (+:sum) schedule(static,1)
for (i = 1; i < 100; ++i)
    sum += 1.0/i; 
int i, tmp;
#pragma omp parallel for private(tmp)
for (i = 0; i < 10; ++i) {
    tmp = i*i*i;
    a[i] = tmp*tmp; 
}
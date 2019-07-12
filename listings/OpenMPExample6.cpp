int i, tmp;
#pragma omp parallel for
for (i = 0; i < 10; ++i) {
    tmp = i*i*i;       /* attemp to optimize */
    a[i] = tmp*tmp;    /* error */
}
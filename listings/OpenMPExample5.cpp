int i; int a[10];
#pragma omp parallel for
for (i = 0; i < 10; ++i) {
    a[i] = i*i*i*i*i*i; 
}
int i, j, sum[3];
#pragma omp parallel for private(j) // OK
for (i = 0; i < 3; ++i) {
    int tmp[5];
    for (j = 1; j <= 5; ++j) {
        tmp[j] = pow(j, i);         // OK
        sum[i] = calculate_sum(tmp, 5);                
    } 
}
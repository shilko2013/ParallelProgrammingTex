int i;
float s = 0;
#pragma omp parallel for reduction (+:s) num_threads(8)
for (i = 1; i < 1000000; ++i) {
    s += 1.0/i;
}
printf("s=%f\n", s);
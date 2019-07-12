int old_s, s = 0; 
omp_lock_t lock1, lock2;
omp_init_lock(&lock1);
omp_init_lock(&lock2);
#pragma omp parallel sections
{
    #pragma omp section 
    for (;;) {
        omp_set_lock(&lock1);    omp_set_lock(&lock2);
        s++;
        omp_unset_lock(&lock2);    omp_unset_lock(&lock1);
    }
    #pragma omp section
    for (;;) {
        omp_set_lock(&lock2);    omp_set_lock(&lock1);
        s++;
        omp_unset_lock(&lock1);    omp_unset_lock(&lock2);
    }
    #pragma omp section
    {
        for(old_s = !s; old_s != s; old_s = s)
	        usleep(10000);
        printf("Deadlock with s=%i\n", s);
        omp_destroy_lock(&lock1);    omp_destroy_lock(&lock2);
        exit(0);
    }
}
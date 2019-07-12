for (i = 1; i < 382; i++) {
	omp_set_num_threads(i);
	double T1 = omp_get_wtime();
	#pragma omp parallel // parallel section start
	#pragma omp master
	s++;                 // parallel section end
	double T2 = omp_get_wtime();
	print_delta(T1, T2);
}
#ifdef _OPENMP
    #include "omp.h"
#else
    int omp_get_num_procs() { return 1; }
#endif
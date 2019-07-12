double result1, result2, result3;
#pragma omp parallel num_threads(3)
{
    #pragma omp for reduction (+:result1) nowait
    for (i = 0; i < 100; ++i) result1 += i;
    #pragma omp sections
    {
        #pragma omp section
        result2 = calculate_pi();
        #pragma omp section
        result3 = calculate_e();
    }
}
use_results(result1, result2, result3);
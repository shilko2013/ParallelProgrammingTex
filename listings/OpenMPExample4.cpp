#pragma omp parallel sections
{
    #pragma omp section
    run_function1();
    #pragma omp section
    run_function2();
}
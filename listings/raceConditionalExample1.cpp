int a = 0;
#pragma omp parallel num_threads(2) shared(a)
{
    if (omp_get_thread_num() == 0) //first thread 
        a = 2; //changes global variable value
    else { //second thread 
        printf("%d",a); //print var value: 0 or 2?
    }
}
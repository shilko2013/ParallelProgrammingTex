void* sum_of_array(void *input){
    int number;
    for (int i=0; i<100; i++){
        number = *(int *)input;
        pthread_mutex_lock(&simple_mutex);
        sum += number;
        pthread_mutex_unlock(&simple_mutex);
        input += sizeof(int);
    }
} 

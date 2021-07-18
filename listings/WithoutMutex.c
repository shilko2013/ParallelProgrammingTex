void* sum_of_array(void *input){
    int number;
    for (int i=0; i<100; i++){
        number = *(int *)input;
        sum += number;
        input += sizeof(int);
    }
} 

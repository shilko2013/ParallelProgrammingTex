#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

// Struct for thread parameters
typedef struct {
    int* array;
    int start, end;
} part_of_array;

// Thread function
void* plus_ten(void *input){
    part_of_array *data = (part_of_array*) input;
    for(int i=data->start; i < data->end; i++){
        data->array[i] += 10;
    }
} 

int main(){
    int N=10;
    int array[N];
    // Init threads
    pthread_t thread_1, thread_2;

    // Fill array with values
    for (int i=0; i < N; i++){
        array[i] = i;
    }

    // Parameters for thread_1 and thread_2
    part_of_array pthrFirst = {array, 0, 5};
    part_of_array pthrSecond = {array, 5, 10};

    // Creating threads 
    if (pthread_create(&thread_1, NULL, plus_ten, &pthrFirst) == -1){
        printf("Поток 1 не создан.");
    }
    if (pthread_create(&thread_2, NULL, plus_ten, &pthrSecond) == -1){
        printf("Поток 2 не создан.");
    }

    // Execute threads
    pthread_join(thread_1, NULL);
    pthread_join(thread_2, NULL);
}

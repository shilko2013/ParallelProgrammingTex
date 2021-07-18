if (pthread_create(&thread_1, NULL, plus_ten, &pthrFirst) == -1){
        printf("Поток 1 не создан.");
}

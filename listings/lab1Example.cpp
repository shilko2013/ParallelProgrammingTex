#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
int main(int argc, char* argv[])
{
    int i, N;
    struct timeval T1, T2;
    long delta_ms;
    N = atoi(argv[1]); /* N равен первому параметру командной строки */
    gettimeofday(&T1, NULL); /* запомнить текущее время T1 */
    for (i=0; i<50; i++) /* 50 экспериментов */
    {
        srand(i);  /* инициализировать начальное значение ГСЧ   */
        /* Заполнить массив исходных данных размером N */
        /* Решить поставленную задачу, заполнить массив с результатами */
        /* Отсортировать массив с результатами указанным методом */
    }
    gettimeofday(&T2, NULL);   /* запомнить текущее время T2 */
    delta_ms =  1000*(T2.tv_sec - T1.tv_sec) + (T2.tv_usec - T1.tv_usec)/1000;
    printf("\nN=%d. Milliseconds passed: %ld\n", N, delta_ms); /* T2 - T1 */
    return 0;
}

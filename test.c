#include "bubble_sort.h"
#include <stdio.h>
#include <time.h>

#define NUM 10

void main(void)
{   
    unsigned int i;
    int Array[NUM] = {32, 13, 23, 402, 3, 24, 2392, 23, 2, 42};
    time_t time_start, time_end;
    double elapsed_time;
    
    for(i = 0; i < NUM; i++)
    {
        printf("%d, ", Array[i]);
        if(i == (NUM - 1)) printf("\n");
    }

    time_start = clock();
    bubble_sort(Array, NUM, 0);
    for(i = 0; i < NUM; i++)
    {
        printf("%d, ", Array[i]);
        if(i == (NUM - 1)) printf("\n");
    }
    time_end = clock();
    elapsed_time = (double)(time_end - time_start);
    printf("Bubble sort: %lf s\n", elapsed_time);
}
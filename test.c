#include "bubble_sort.h"
#include "selection_sort.h"
#include <stdio.h>
#include <string.h>
#include <time.h>

#define NUM 10

void main(void)
{   
    unsigned int i;
    int Array[NUM] = {32, 13, 23, 402, 3, 24, 2392, 23, 2, 42};
    time_t time_start, time_end;
    double elapsed_time;

    int bubble_Array[NUM];
    int selection_Array[NUM];

    memcpy(bubble_Array, Array, sizeof(int)*NUM);
    memcpy(selection_Array, Array, sizeof(int)*NUM);
    
    for(i = 0; i < NUM; i++)
    {
        printf("%d, ", Array[i]);
        if(i == (NUM - 1)) printf("\n");
    }

    time_start = clock();
    bubble_sort(bubble_Array, NUM, 1);
    time_end = clock();
    elapsed_time = (double)(time_end - time_start);
    for(i = 0; i < NUM; i++)
    {
        printf("%d, ", bubble_Array[i]);
        if(i == (NUM - 1)) printf("\n");
    }
    printf("Bubble sort: %lf s\n", elapsed_time);

    time_start = clock();
    selection_sort(selection_Array, NUM, 1);
    time_end = clock();
    elapsed_time = (double)(time_end - time_start);
    for(i = 0; i < NUM; i++)
    {
        printf("%d, ", selection_Array[i]);
        if(i == (NUM - 1)) printf("\n");
    }
    printf("Selection sort: %lf s\n", elapsed_time);
}
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insert_sort.h"
#include "quick_sort.h"
#include "heap_sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM 10000
#define MODE 1
//#define PRINT_RESULT

void print_array(int* Array, int n);

void main(void)
{   
    int i;
    int Array[NUM];
    time_t time_start, time_end;
    double elapsed_time;

    int bubble_Array[NUM];
    int selection_Array[NUM];
    int insert_Array[NUM];
    int quick_Array[NUM];
    int heap_Array[NUM];

    // 1~100の乱数作成
    srand(time(NULL)); // 乱数設定
    for(i = 0; i < NUM; i++)
    {
        Array[i] = rand() % 1000 + 1; // 0~99までの値に1を足す
    }

    memcpy(bubble_Array, Array, sizeof(int)*NUM);
    memcpy(selection_Array, Array, sizeof(int)*NUM);
    memcpy(insert_Array, Array, sizeof(int)*NUM);
    memcpy(quick_Array, Array, sizeof(int)*NUM);
    memcpy(heap_Array, Array, sizeof(int)*NUM);
    
    printf("Before sort: \n");
    for(i = 0; i < NUM; i++)
    {
        printf("%d, ", Array[i]);
        if(i == (NUM - 1)) printf("\n\n");
    }

    time_start = clock();
    bubble_sort(bubble_Array, NUM, MODE);
    time_end = clock();
    elapsed_time = (double)(time_end - time_start);
    #ifdef PRINT_RESULT
    print_array(bubble_Array, NUM);
    #endif
    printf("Bubble sort: %lf\n\n", elapsed_time);

    time_start = clock();
    selection_sort(selection_Array, NUM, MODE);
    time_end = clock();
    elapsed_time = (double)(time_end - time_start);
    #ifdef PRINT_RESULT
    print_array(selection_Array, NUM);
    #endif
    printf("Selection sort: %lf\n\n", elapsed_time);

    time_start = clock();
    insert_sort(insert_Array, NUM, MODE);
    time_end = clock();
    elapsed_time = (double)(time_end - time_start);
    #ifdef PRINT_RESULT    
    print_array(insert_Array, NUM);
    #endif
    printf("Insert sort: %lf\n\n", elapsed_time);

    time_start = clock();
    quick_sort(quick_Array, 0, (NUM - 1), MODE);
    time_end = clock();
    elapsed_time = (double)(time_end - time_start);
    #ifdef PRINT_RESULT    
    print_array(quick_Array, NUM);
    #endif
    printf("Quick sort: %lf\n\n", elapsed_time);

    time_start = clock();
    heap_sort(heap_Array, NUM, MODE);
    time_end = clock();
    elapsed_time = (double)(time_end - time_start);
    #ifdef PRINT_RESULT    
    print_array(heap_Array, NUM);
    #endif
    printf("Heap sort: %lf\n\n", elapsed_time);

}

void print_array(int* Array, int n)
{
    int i;
    
    for(i = 0; i < n; i++)
    {
        printf("%d, ", Array[i]);
        if(i == (n - 1)) printf("\n");
    }
}
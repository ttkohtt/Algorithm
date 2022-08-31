#include "heap_sort.h"
#include <stdio.h>

/************************************************
 * Private macro
 * **********************************************/

/************************************************
 * Type definition
 * **********************************************/

/************************************************
 * Prototype declaration
 * **********************************************/
void swap(int* a, int* b);
void min_heapfy(int* Node, int idx, int nchild);
void max_heapfy(int* Node, int idx, int nchild);
void build_min_heap(int* Array, int length);
void build_max_heap(int* Array, int length);

/************************************************
 * Global variable
 * **********************************************/

/************************************************
 * Function definition
 * **********************************************/
int heap_sort(int* Array, int length, unsigned short mode)
{
    int i;

    // Ascending order
    if(mode == 0)
    {
        for(i = length; i > 1; i--)
        {
            build_max_heap(Array, i);
            swap(&Array[0], &Array[i - 1]);
        }
    }
    
    // Descending order
    if(mode == 1)
    {
        for(i = length; i > 1; i--)
        {
            build_min_heap(Array, i);
            swap(&Array[0], &Array[i - 1]);
        }
    }
    
    // Error
    if(mode > 1)
    {   
        printf("The third argument must be 0 or 1.");
        return -1;
    }
    
    return 0;
}

void build_min_heap(int* Array, int length)
{
    int i, last_idx, nchild;

    // Get the last parent idx
    last_idx = (length / 2) - 1;

    // Get the number of last child
    nchild = length % 2 + 1;

    // When there is only one last child
    if(nchild == 1)
    {
        min_heapfy(Array, last_idx, nchild);
        nchild = 2;
        last_idx--;
    }
    
    // Sort (parent < child)
    for(i = last_idx; i >= 0; i--)
    {
        min_heapfy(Array, i, nchild);
    }
}

void build_max_heap(int* Array, int length)
{
    int i, last_idx, nchild;

    // Get the last parent idx
    last_idx = (length / 2) - 1;

    // Get the number of last child
    nchild = length % 2 + 1;

    // When there is only one last child
    if(nchild == 1)
    {
        max_heapfy(Array, last_idx, nchild);
        nchild = 2;
        last_idx--;
    }
    
    // Sort (parent < child)
    for(i = last_idx; i >= 0; i--)
    {
        max_heapfy(Array, i, nchild);
    }
}

void min_heapfy(int* Array, int idx, int nchild)
{
    int left, right;
    int* min_ptr;

    // Set the index left and right child
    left = 2 * idx + 1;
    right = 2 * (idx + 1);

    // Set the left child as smaller child
    min_ptr = &Array[left];

    // When there is two child
    if(nchild == 2)
    {   
        // When right child bigger than left child
        if(Array[right] < *min_ptr)
        {   
            // Set the right child as smaller child
            min_ptr = &Array[right];
        }
    }

    // When the smaller child smaller than the node
    if(*min_ptr < Array[idx])
    {
        swap(&Array[idx], min_ptr);
    }
}

void max_heapfy(int* Array, int idx, int nchild)
{
    int left, right;
    int* max_ptr;

    // Set the index left and right child
    left = 2 * idx + 1;
    right = 2 * (idx + 1);

    // Set the left child as bigger child
    max_ptr = &Array[left];

    // When there is two child
    if(nchild == 2)
    {   
        // When right child smaller than left child
        if(*max_ptr < Array[right])
        {   
            // Set the right child as bigger child
            max_ptr = &Array[right];
        }
    }

    // When the smaller child bigger than the node
    if(Array[idx] < *max_ptr)
    {
        swap(&Array[idx], max_ptr);
    }
}

void swap(int* a, int* b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
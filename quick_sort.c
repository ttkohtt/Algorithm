#include "quick_sort.h"
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

/************************************************
 * Global variable
 * **********************************************/

/************************************************
 * Function definition
 * **********************************************/
int quick_sort(int* Array, int left, int right, unsigned short mode)
{
    int i, j;
    int pivot, Temp;

    // when there are no more than two elements 
    if(left >= right)
    {
        return 0;
    }

    // Set center of array to pivot value
    pivot = Array[(left + right) / 2];

    // Initialize index
    i = left;
    j = right;

    // Ascending order
    if(mode == 0)
    {   
        // Infinite loop
        while(TRUE)
        {
            while(Array[i] < pivot)
            {
                i++;
            }
            
            while(pivot < Array[j])
            {
                j--;
            }

            if(i >= j)
            {
                break; // exit the loop
            }

            // Swap the value
            Temp = Array[i];
            Array[i] = Array[j];
            Array[j] = Temp;

            i++;
            j--;
        }

        quick_sort(Array, left, (i - 1), 0);
        quick_sort(Array, (j + 1), right, 0);        
    }
    
    // Descending order
    if(mode == 1)
    {
        // Infinite loop
        while(TRUE)
        {
            while(pivot < Array[i])
            {
                i++;
            }
            
            while(Array[j] < pivot)
            {
                j--;
            }

            if(i >= j)
            {
                break; // exit the loop
            }

            // Swap the value
            Temp = Array[i];
            Array[i] = Array[j];
            Array[j] = Temp;

            i++;
            j--;
        }     
        
        quick_sort(Array, left, (i - 1), 1);
        quick_sort(Array, (j + 1), right, 1); 
    }
    
    // Error
    if(mode > 1)
    {   
        printf("The third argument must be 0 or 1.");
        return -1;
    }
    
    return 0;
}
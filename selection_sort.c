#include "selection_sort.h"
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
int selection_sort(int* Array,unsigned int n, unsigned short mode)
{
    unsigned int i, j, idx;
    int found_num, Temp;

    // Ascending order
    if(mode == 0)
    {
        for(i = 0; i < (n - 1) ; i++)
        {   
            // Set min index
            idx = i;
            
            // Find minimum
            for(j = i + 1; j < n; j++)
            {   
                if(Array[j] < Array[idx])
                {
                    idx = j; // update the minimum index
                }
            }

            // Exchange
            Temp = Array[i];
            Array[i] = Array[idx];
            Array[idx] = Temp;
        }
    }
    
    // Descending order
    if(mode == 1)
    {
        for(i = 0; i < (n - 1) ; i++)
        {
            // Set min index
            idx = i;
            
            // Find max
            for(j = i + 1; j < n; j++)
            {   
                if(Array[j] > Array[idx])
                {
                    idx = j; // update the max index
                }
            }

            // Exchange
            Temp = Array[i];
            Array[i] = Array[idx];
            Array[idx] = Temp;
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
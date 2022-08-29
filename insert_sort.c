#include "insert_sort.h"
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
int insert_sort(int* Array, int n, unsigned short mode)
{
    int i, j, idx;
    int found_num, Temp;

    // Ascending order
    if(mode == 0)
    {
        for(i = 1; i < n ; i++)
        {
            for(j = i; j > 0; j--)
            {
                if(Array[j] < Array[j - 1])
                {   
                    Temp = Array[j - 1];
                    Array[j - 1] = Array[j];
                    Array[j] = Temp;
                }
            }
        }
    }
    
    // Descending order
    if(mode == 1)
    {
        for(i = 1; i < n ; i++)
        {
            for(j = i; j > 0; j--)
            {
                if(Array[j] > Array[j - 1])
                {   
                    Temp = Array[j - 1];
                    Array[j - 1] = Array[j];
                    Array[j] = Temp;
                }
            }
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
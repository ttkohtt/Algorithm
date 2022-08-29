#include "bubble_sort.h"
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
int bubble_sort(int* Array,unsigned int n, unsigned short mode)
{
    unsigned int i, j;
    int Temp;

    // Ascending order
    if(mode == 0)
    {
        for(i = (n - 1); i > 0; i--)
        {
            for(j = 0; j < i; j++)
            {
                if(Array[j] > Array[j + 1])
                {
                    Temp = Array[j + 1];
                    Array[j + 1] = Array[j];
                    Array[j] = Temp;
                }
            }
        }
    }
    
    // Descending order
    if(mode == 1)
    {
        for(i = (n - 1); i > 0; i--)
        {
            for(j = 0; j < i; j++)
            {
                if(Array[j] < Array[j + 1])
                {
                    Temp = Array[j + 1];
                    Array[j + 1] = Array[j];
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
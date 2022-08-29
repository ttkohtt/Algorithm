#ifndef QUICK_SORT_H
#define QUICK_SORT_H
/************************************************
 * Include
 * **********************************************/

/************************************************
 * Macro definition
 * **********************************************/
#define TRUE 1

/************************************************
 * Type definition
 * **********************************************/

/************************************************
 * Prototype declaration
 * **********************************************/
/**
 * @brief       Sort using insert sort
 * @param Array Array to sort
 * @param left  Minimum index of array
 * @param right Max index of array
 * @param mode  0: Ascending order, 1: Descending order
 * @return      0: Success, -1: Error
 */
int quick_sort(int* Array, int left, int right, unsigned short mode);

#endif
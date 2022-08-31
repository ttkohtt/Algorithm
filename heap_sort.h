#ifndef HEAP_SORT_H
#define HEAP_SORT_H
/************************************************
 * Include
 * **********************************************/

/************************************************
 * Macro definition
 * **********************************************/

/************************************************
 * Type definition
 * **********************************************/

/************************************************
 * Prototype declaration
 * **********************************************/
/**
 * @brief           Sort using heap sort
 * @param Array     Array to sort
 * @param length    Length of array
 * @param mode      0: Ascending order, 1: Descending order
 * @return          0: Success, -1: Error
 */
int heap_sort(int* Array, int length, unsigned short mode);

#endif
#ifndef INSERT_SORT_H
#define INSERT_SORT_H
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
 * @brief       Sort using insert sort
 * @param Array Array to sort
 * @param n     Number of array
 * @param mode  0: Ascending order, 1: Descending order
 * @return      0: Success, -1: Error
 */
int insert_sort(int* Array, int n, unsigned short mode);

#endif
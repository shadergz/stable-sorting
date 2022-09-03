/*
 *
 *  Source code written by Gabriel Correia

 *  Module description: This a Bubble sort implementation, in a real
    world use case, this a horrible sorting algorithm, because:
 *  1. Various array indexes access in multiple times (more than algorithms
    like Quicksort).
 *  2. There isn't a usage BEST case of this algorithm, only average and worst
    and both has time complexity of O-(N^2) where "n" is the number of elements or
    the input array size (more precisely). 
*/

#include <assert.h>

#include "bubble.h"

/* Swap two integer values */
void swap (int32_t *x, int32_t *y)
{
    int32_t temp = *x;
    *x = *y;
    *y = temp;
}

/*
 *  A simple example:
 *  4, 2, 1, 7, 85, 3, 8, 34
 *  2, 1, 4, 3, 7, 8, 34, 85
 *  1, 2, 3, 4, 7, 8, 34, 85
*/

/* Bubble sort implementation */
uint32_t bubble (int32_t array[], uint32_t size)
{
    assert (array && size);

    uint32_t i, k, cmp = 0;
    for (i = 0; i < size; i++)
        for (k = 0; k < size - i; k++, cmp++)
            if (array[k] > array[k + 1])
                swap (&array[k], &array[k + 1]);
    return cmp;
}


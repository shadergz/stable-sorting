/*
 *  Source code written by Gabriel Correia
*/

#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <assert.h>

#include "merge_sort.h"

#define ARRAY_SIZE 10

int main (void)
{
    /* Allocating enough memory */
    int *array = NULL;
    
    assert ((array = calloc (ARRAY_SIZE, sizeof (int))));

    /* Setting the seed from the time */
    srand (time (NULL));

    for (int k = 0; k < ARRAY_SIZE; k++)
        array[k] = rand () % 1000;

    puts ("Before Merge sort: ");
    for (int k = 0; k < ARRAY_SIZE; k++)
        printf ("%d ", array[k]);
    puts ("");

    merge_sort (array, 0, ARRAY_SIZE - 1);

    puts ("After Merge sort: ");
    for (int k = 0; k < ARRAY_SIZE; k++)
        printf ("%d ", array[k]);

    puts ("");

    free (array);


}


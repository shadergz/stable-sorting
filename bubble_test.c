/*
 *  Source code written by Gabriel Correia
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#include "bubble.h"

#define ARRAY_SIZE 4

int main (void)
{
    int *array = NULL;
    assert ((array = calloc (ARRAY_SIZE, sizeof (int))));

    /* Initializing random number generator */
    srand (time (NULL));

    for (int k = 0; k < ARRAY_SIZE; k++)
        array[k] = rand () % 1000;

    puts ("Before Bubble sort: ");
    for (int k = 0; k < ARRAY_SIZE; k++)
        printf ("%d ", array[k]);
    puts ("");
    
    printf ("Array access times: %u\n", bubble (array, ARRAY_SIZE - 1));

    /* Printing all array */
    puts ("After Bubble sort: ");
    for (int k = 0; k < ARRAY_SIZE; k++)
        printf ("%d ", array[k]);
    puts ("");

    free (array);
    return 0;
}

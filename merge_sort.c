/*
 *
 *  Source code written by Gabriel Correia
 
 *  Module description: A Merge sort implementation
*/

#include <string.h>

#include "merge_sort.h"

static void merge (int32_t unsorted_array[], int32_t left, 
    int32_t div, int32_t right)
{
    int32_t i = 0, j = 0, k = left;
    int32_t left_size = div - left + 1;
    int32_t right_size = right - div;

    int32_t left_array[left_size],
        right_array[right_size];

    memcpy (left_array, unsorted_array + left, sizeof (int32_t) * left_size);
    memcpy (right_array, unsorted_array + div + 1, sizeof (int32_t) * right_size);

    while (i < left_size && j < right_size) {
        if (left_array[i] <= right_array[j]) {
            unsorted_array[k] = left_array[i];
            i++;
        } else {
            unsorted_array[k] = right_array[j];
            j++;
        }
        k++;
    }

    if (i < left_size)
        memcpy (unsorted_array + k, left_array + i, sizeof (int32_t) * (left_size - i));
    if (j < right_size)
        memcpy (unsorted_array + k, right_array + j, sizeof (int32_t) * (right_size - j));
    
}

void merge_sort (int32_t unsorted_array[], int32_t left, int32_t right)
{
    int32_t div;
    if (left < right) {
        div = left + (right - left) / 2;

        merge_sort (unsorted_array, left, div);
        merge_sort (unsorted_array, div + 1, right);

        merge (unsorted_array, left, div, right);
        
    }
}


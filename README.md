# stable-sorting

A collection of stable sorting algorithms written in C

## Examples

### Bubble sort

```c

#define ARRAY_SIZE 4

int main (void)
{
    int *x = NULL;
    assert ((x = calloc (ARRAY_SIZE, sizeof (int))));

    /* Initializing random number generator */
    srand (time (NULL));

    for (int k = 0; k < ARRAY_SIZE; k++)
        x[k] = rand () % 1000;
    
    printf ("Array access times: %u\n", bubble (x, ARRAY_SIZE - 1));

    /* Print all array */
    for (int k = 0; k < ARRAY_SIZE; k++)
        printf ("%d ", x[k]);
    puts ("");

    free (x);
    return 0;
}

```

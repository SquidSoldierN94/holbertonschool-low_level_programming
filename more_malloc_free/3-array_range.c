#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value of the range (inclusive).
 * @max: The maximum value of the range (inclusive).
 *
 * Return: On success, a pointer to the newly created array.
 *         On failure, returns NULL.
 */
int *array_range(int min, int max)
{
    int *arr;
    int size, i;

    if (min > max)
        return (NULL);

    size = max - min + 1;

    arr = malloc(size * sizeof(int));
    if (arr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = min++;

    return (arr);
}

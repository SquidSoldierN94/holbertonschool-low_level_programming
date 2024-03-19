#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of elements.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: On success, a pointer to the allocated memory.
 *         On failure, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *arr;

    if (nmemb == 0 || size == 0)
        return (NULL);

    arr = malloc(nmemb * size);

    return (arr);
}

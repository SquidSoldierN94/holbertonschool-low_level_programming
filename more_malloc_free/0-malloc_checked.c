#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc and exits if it fails
 * @b: The size of the memory block to allocate
 *
 * Return: A pointer to the allocated memory block
 *         NULL if malloc fails
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        exit(98);
    }

    return (ptr);
}

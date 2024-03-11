#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int index;
    unsigned char *dest_memory = (unsigned char *)dest;
    unsigned char *src_memory = (unsigned char *)src;

    for (index = 0; index < n; index++)
        dest_memory[index] = src_memory[index];

    return dest;
}

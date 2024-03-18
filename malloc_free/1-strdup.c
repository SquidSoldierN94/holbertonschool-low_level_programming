#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the newly allocated string, or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
    char *duplicate;
    unsigned int length = 0;
    unsigned int i;

    while (str[length] != '\0')
        length++;

    duplicate = malloc((length + 1) * sizeof(char));

    if (duplicate == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    for (i = 0; i <= length; i++)
        duplicate[i] = str[i];

    return duplicate;
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to a newly allocated space in memory containing the concatenated
 *         string, or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    int len1 = 0, len2 = 0, i;

    while (s1 && s1[len1])
        len1++;
    while (s2 && s2[len2])
        len2++;

    concat = malloc((len1 + len2 + 1) * sizeof(char));
    
    if (concat == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    for (i = 0; i < len2; i++)
        concat[len1 + i] = s2[i];

    concat[len1 + len2] = '\0';

    return concat;
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate.
 *
 * Return: On success, a pointer to the concatenated string.
 *         On failure, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	concat = malloc((len1 + n + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (i = 0; i < n && s2[i]; i++)
		concat[len1 + i] = s2[i];

	concat[len1 + i] = '\0';

	return (concat);
}

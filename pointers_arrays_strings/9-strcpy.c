#include "main.h"

/*
 * Main - Woop Yo Ass
 *
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
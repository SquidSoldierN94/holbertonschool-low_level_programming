#include "main.h"

/*
 * Main - Woop Yo Ass
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
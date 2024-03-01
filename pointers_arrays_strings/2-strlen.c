#include "main.h"

/*
 * Main - Woop Yo Ass
 *
 * Return: Always 0
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
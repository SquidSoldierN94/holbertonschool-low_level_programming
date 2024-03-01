#include "main.h"

/*
 * Main - Woop Yo Ass
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
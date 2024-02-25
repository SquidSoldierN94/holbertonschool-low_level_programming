#include "main.h"

/*
 * Main - Woop Yo Ass
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
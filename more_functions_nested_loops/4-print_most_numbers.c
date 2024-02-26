#include "main.h"

/*
 * Main - Do Stuff IDC
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int the_abscentee;

	for (the_abscentee = 0; the_abscentee <= 9; the_abscentee++)
	{
	if (the_abscentee == 2 )
	{
	continue;
	}
	if (the_abscentee == 4)
	{
	continue;
	}
	{
		_putchar('0' + the_abscentee);
	}
	}
	_putchar('\n');

}

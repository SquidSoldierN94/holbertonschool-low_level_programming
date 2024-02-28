#include "main.h"

/*
 * Main - Do Stuff IDC
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int hash, index;

	if (n > 0)
	{
		for (hash = 1; hash <= n; hash++)
		{
			for (index = n - hash; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < hash; index++)
				_putchar('#');

			if (hash == n)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
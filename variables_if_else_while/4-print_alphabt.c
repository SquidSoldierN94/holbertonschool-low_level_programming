#include <stdio.h>

/*
 * Main - Do Stuff IDC
 *
 * Return: Always 0
 */
int main(void)
{
	int ascii_value;
	int electric_boogaloo;
	int maggots;

	for (ascii_value = 97; ascii_value <= 100; ascii_value++)
	{
		putchar(ascii_value);
	}

	for (electric_boogaloo = 102; electric_boogaloo <= 112; electric_boogaloo++)
	{
		putchar(electric_boogaloo);
	}

	for (maggots = 114; maggots <= 122; maggots++)
	{
		putchar(maggots);
	}

	putchar(10);

	return (0);
}

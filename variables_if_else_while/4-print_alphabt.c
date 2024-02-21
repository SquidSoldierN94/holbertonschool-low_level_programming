#include <stdio.h>

/*
 * Main - Do Stuff IDC
 *
 * Return: Always 0
 */
int main(void)
{
	int ascii_value;

	for (ascii_value = 97; ascii_value <= 122; ascii_value++)
	{
	if (ascii_value == 101 )
	{
	continue;
	}
	if (ascii_value == 113)
	{
	continue;
	}
	{
		putchar(ascii_value);
	}
	}
	putchar(10);

	return (0);
}

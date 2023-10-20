#include "main.h"
/**
*print_last_digit - Checks for lowercase character
*@c: The character to be checked
*
*Return: 1 for lowercase character or 0 for anything else
*/
int print_last_digit(int c)
{
int v;
v = c % 10;
{
if (v < 0)
{
v = -v;
}
_putchar (v);
}
return (0);
}

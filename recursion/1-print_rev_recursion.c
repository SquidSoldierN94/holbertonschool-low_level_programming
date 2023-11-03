#include "main.h"
/**
*_print_rev_recursion - Does shit idk
*
*@s: One of the things
*
*Return: Nothing
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++ ;
_print_rev_recursion(s);
s--;
_putchar(*s);
}

#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s: the string to print
 */
void _print_rev_recursion(char *s)
{
    if (*s != '\0')
    {
        _print_rev_recursion(s + 1);
    }
}
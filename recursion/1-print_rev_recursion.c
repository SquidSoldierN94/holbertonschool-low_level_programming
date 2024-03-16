#include "main.h"
#include <stdio.h>
/**
 * main - prints the content of *s
 * 
 * 
 * return - always 0
 * 
*/
void _print_rev_recursion(char *s)
{
if (*s == "\0")
{
    return;
}
_print_rev_recursion(s + 1);
printf("%c", *s);
}
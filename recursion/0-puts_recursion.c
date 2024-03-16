#include "main.h"
#include <stdio.h>
/**
 * main - prints the content of *s
 * 
 * 
 * return - always 0
 * 
*/
void _puts_recursion(char *s)
{
if (*s == "\0")
{
    return;
}
printf("%c", *s);

_puts_recursion(s + 1);
}

#include "main.h"
#include <stdio.h>
/**
 * main - prints the content of *s
 * 
 * 
 * return - always 0
 * 
*/
int _strlen_recursion(char *s)
{
int length = _strlen_recursion(*s);
if (*s == "\0")
{
return 0;
}
return 1 + _strlen_recursion(s + 1);
printf("%d\n", length);
return 0;
}
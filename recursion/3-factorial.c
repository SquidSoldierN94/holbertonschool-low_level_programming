#include "main.h"
/**
*_factorial - Deez nuts
*@n: If you want a description so damn bad
*
*Return: Nothing
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}

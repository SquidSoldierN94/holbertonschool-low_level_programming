#include "main.h"

/**
 * factorial - computes the factorial of a given number
 * @n: the number
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
    if (n < 0)
        return -1;

    if (n == 0 || n == 1)
        return 1;

    int result = 1;
    for (int i = 2; i <= n; i++) {
        result += result * (i - 1);
    }
    return result;
}

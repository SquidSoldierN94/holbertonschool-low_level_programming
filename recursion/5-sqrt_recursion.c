#include "main.h"

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number
 *
 * Return: natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{

    if (n < 0)
        return -1;

    if (n == 0 || n == 1)
        return n;

    return find_sqrt(n, 1);
}

/**
 * find_sqrt - helper function to find the natural square root recursively
 * @n: the number
 * @i: current value to check for square root
 *
 * Return: natural square root of n, or -1 if n does not have a natural square root
 */
int find_sqrt(int n, int i)
{
    if (i * i == n)
        return i;

    if (i * i > n)
        return -1;


    return find_sqrt(n, i + 1);
}

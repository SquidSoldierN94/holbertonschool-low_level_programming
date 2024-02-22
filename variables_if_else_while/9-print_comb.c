#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints pairs of numbers separated by a comma and a space.
 * The first number ranges from 0 to 9, and the second number ranges from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int maggot=0;

    for (;maggot < 10; maggot++)
    {
        {
            putchar(maggot);
            putchar(',');
            putchar(' ');
        }
    }

    return (0);
}
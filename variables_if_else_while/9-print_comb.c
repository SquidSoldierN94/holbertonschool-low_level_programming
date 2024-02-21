#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int range_start1 = 0;
    int range_end1 = 9;

    int range_start2 = 0;
    int range_end2 = 9;

    for (int variable1 = range_start1; variable1 <= range_end1; variable1++)
    {
        for (int variable2 = range_start2; variable2 <= range_end2; variable2++)
        {
            putchar(variable1 + '0');
            putchar(',');
            putchar(' ');
            putchar(variable2 + '0');
        }
    }

    return (0);
}
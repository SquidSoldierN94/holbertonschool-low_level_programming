#include <stdio.h>

/*
 * Main - Do Stuff IDC
 *
 * Return: Always 0
 */
int main(void)
{
    int ascii_value;

    for (ascii_value = 48; ascii_value <= 57; ascii_value++)
    {
        putchar(ascii_value);
    }

    putchar(10);

    return (0);
}
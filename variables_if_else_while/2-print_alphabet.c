#include <stdio.h>

/*
 * Main - Do Stuff IDC
 *
 * Return: Always 0
 */
int main(void)
{
    int ascii_value;

    for (ascii_value = 97; ascii_value <= 122; ascii_value++)
    {
        putchar(ascii_value);
    }

    putchar(10);

    return (0);
}
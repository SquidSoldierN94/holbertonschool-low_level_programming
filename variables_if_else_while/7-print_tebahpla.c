#include <stdio.h>

/*
 * Main - Do Stuff IDC
 *
 * Return: Always 0
 */
int main(void)
{
    int ascii_value;
    ascii_value = 122;

    while (ascii_value >= 97)
    {
        putchar(ascii_value);
        ascii_value--
    }
    
    putchar(10);

    return (0);
}
#include <stdio.h>

/*
 * Main - Do Stuff IDC
 *
 * Return: Always 0
 */
int main(void)
{
    int ascii_value;
    int electric_boogaloo;
    ascii_value = 48;
    electric_boogaloo = 97;

    while (ascii_value <= 57 || electric_boogaloo <= 102) {
        putchar(ascii_value);
        putchar(electric_boogaloo);
        putchar('\n'); // Print a newline character after printing each pair of characters
        ascii_value++;
        electric_boogaloo++;
    }

    return 0;
}
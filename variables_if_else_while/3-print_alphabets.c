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
    for (ascii_value = 97; ascii_value <= 122; ascii_value++)
    {
        putchar(ascii_value);
    }
for (electric_boogaloo = 65; electric_boogaloo <= 90; electric_boogaloo++)
{
    putchar(electric_boogaloo);
}
    putchar(10);

    return (0);
}
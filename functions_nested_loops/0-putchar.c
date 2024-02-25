#include "main.h"

/*
 * Main - Woop Yo Ass
 *
 * Return: Always 0
 */
int main(void)
{
    char deez[] = "_putchar";
    int nuts = 0;

    while (deez[nuts] != '\0') {
        _putchar(deez[nuts]);
        nuts++;
    }

    _putchar('\n');
    return 0;
}
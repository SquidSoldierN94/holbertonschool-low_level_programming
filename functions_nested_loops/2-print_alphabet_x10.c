#include "main.h"

/*
 * Main - Woop Yo Ass
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
    char deez[] = "abcdefghijklmnopqrstuvwxyz";
    int maggot = 0;

while (maggot < 10)
{
    int nuts = 0;
    while (deez[nuts] != '\0') 
    {
        putchar(deez[nuts]);
        nuts++;
    }
maggot++;
    putchar('\n');
}
}
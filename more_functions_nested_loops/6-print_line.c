#include "main.h"

/*
 * Main - Do Stuff IDC
 *
 * Return: Always 0
 */
void print_line(int n)
{
    char *line[4];

    line[0] = "$";
    line[1] = "__$";
    line[2] = "__________$";
    line[3] = "$";

    for (int i = 0; i < 4; i++)
    {
        char *current_line = line[i];

        for (int j = 0; current_line[j] != '\0'; j++)
        {
            _putchar(current_line[j]);
        }

        _putchar('\n');
    }
}

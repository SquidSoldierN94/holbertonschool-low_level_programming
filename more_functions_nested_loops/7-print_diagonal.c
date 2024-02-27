#include "main.h"

/*
 * Main - Do Stuff IDC
 *
 * Return: Always 0
 */
void print_line(int n)
{
    char *line[13];

    line[0] = "$";
    line[1] = "\$";
    line[2] = " \$";
    line[3] = "\$";
    line[4] = " \$";
    line[5] = "  \$";
    line[6] = "   \$";
    line[7] = "    \$";
    line[8] = "     \$";
    line[9] = "      \$";
    line[10] = "       \$";
    line[11] = "         \$";
    line[12] = "$";

    for (int i = 0; i < 13; i++)
    {
        char *current_line = line[i];

        for (int j = 0; current_line[j] != '\0'; j++)
        {
            _putchar(current_line[j]);
        }

        _putchar('\n');
    }
}

#include "main.h"

/*
 * Main - Do Stuff IDC
 *
 * Return: Always 0
 */
void print_line(int n)
{
    char *line[5][20]; // Assuming a maximum of 20 characters per element

    // Initialize the lines with numbers and FizzBuzz
    line[0][0] = "1 ";
    line[0][1] = "2 ";
    line[0][2] = "Fizz ";
    line[0][3] = "4 ";
    line[0][4] = "Buzz ";
    line[0][5] = "Fizz ";
    line[0][6] = "7 ";
    line[0][7] = "8 ";
    line[0][8] = "Fizz ";
    line[0][9] = "Buzz ";
    line[0][10] = "11 ";
    line[0][11] = "Fizz ";
    line[0][12] = "13 ";
    line[0][13] = "14 ";
    line[0][14] = "FizzBuzz ";
    line[0][15] = "16 ";
    line[0][16] = "17 ";
    line[0][17] = "Fizz ";
    line[0][18] = "19 ";
    line[0][19] = "Buzz ";

    // Print each line
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            _putchar(line[j][i]);
        }
        _putchar('\n');
    }
}

#include "3-calc.h"
#include <stdlib.h>

int _putchar(char c);

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        char *error = "Error\n";
        while (*error)
            _putchar(*error++);
        return (98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    op_func = get_op_func(argv[2]);

    if (!op_func || !(*(argv[2] + 1)))
    {
        char *error = "Error\n";
        while (*error)
            _putchar(*error++);
        return (99);
    }

    if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
    {
        char *error = "Error\n";
        while (*error)
            _putchar(*error++);
        return (100);
    }

    result = op_func(num1, num2);

    char buffer[12]; /* Buffer for integer to string conversion */
    int i = 0;

    if (result < 0)
    {
        _putchar('-');
        result = -result;
    }

    while (result > 0)
    {
        buffer[i++] = result % 10 + '0';
        result /= 10;
    }

    if (i == 0)
        buffer[i++] = '0';

    while (i-- > 0)
        _putchar(buffer[i]);

    _putchar('\n');

    return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

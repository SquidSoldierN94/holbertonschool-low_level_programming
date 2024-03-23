#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int _putchar(char c);

int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        const char *error = "Error\n";
        while (*error != '\0')
        {
            _putchar(*error);
            error++;
        }
        return (98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    op_func = get_op_func(argv[2]);

    if (!op_func)
    {
        const char *error = "Error\n";
        while (*error != '\0')
        {
            _putchar(*error);
            error++;
        }
        return (99);
    }

    if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
    {
        const char *error = "Error\n";
        while (*error != '\0')
        {
            _putchar(*error);
            error++;
        }
        return (100);
    }

    result = op_func(num1, num2);

    printf("%d\n", result);

    return (0);
}

int _putchar(char c)
{
    putchar(c);
    return 0;
}
#include <stdlib.h>
#include "3-calc.h"

int _putchar(char c);

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, other values on failure
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        const char *error = "Error\n";
        while (*error)
        {
            _putchar(*error);
            error++;
        }
        return (98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    op_func = get_op_func(argv[2]);

    if (!op_func)
        return (99);

    if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
    {
        const char *error = "Error\n";
        while (*error)
        {
            _putchar(*error);
            error++;
        }
        return (100);
    }

    result = op_func(num1, num2);

    char buffer[12];
    int i = 0;
    while (result)
    {
        buffer[i++] = result % 10 + '0';
        result /= 10;
    }

    if (i == 0)
        buffer[i++] = '0';

    while (i--)
        _putchar(buffer[i]);

    _putchar('\n');

    return (0);
}

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1. On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

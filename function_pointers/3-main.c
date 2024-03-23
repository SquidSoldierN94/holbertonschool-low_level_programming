#include <stdlib.h>
#include "3-calc.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98, 99, or 100 on failure
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        for (char *error = "Error\n"; *error != '\0'; error++)
            _putchar(*error);
        return (98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    op_func = get_op_func(argv[2]);

    if (!op_func)
        return (99);

    if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
    {
        for (char *error = "Error\n"; *error != '\0'; error++)
            _putchar(*error);
        return (100);
    }

    result = op_func(num1, num2);

    for (char *c = itoa(result); *c != '\0'; c++)
        _putchar(*c);

    return (0);
}

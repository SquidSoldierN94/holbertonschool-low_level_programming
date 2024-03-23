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
        while (*error)
            _putchar(*error++);
        return (98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    op_func = get_op_func(argv[2]);

    if (!op_func)
    {
        const char *error = "Error\n";
        while (*error)
            _putchar(*error++);
        return (99);
    }

    if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
    {
        const char *error = "Error\n";
        while (*error)
            _putchar(*error++);
        return (100);
    }

    result = op_func(num1, num2);

    if (result < 0)
    {
        _putchar('-');
        result *= -1;
    }

    /* Convert result to string and print each digit */
    int temp = result;
    int digits = 0;
    while (temp > 0)
    {
        temp /= 10;
        digits++;
    }

    char buffer[digits + 1];
    buffer[digits] = '\0';

    while (digits--)
    {
        buffer[digits] = result % 10 + '0';
        result /= 10;
    }

    const char *ptr = buffer;
    while (*ptr)
        _putchar(*ptr++);

    _putchar('\n');

    return (0);
}

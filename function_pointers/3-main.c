#include <stdlib.h>
#include "3-calc.h"

int _putchar(char c);

int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*op_func)(int, int);
    int temp;
    int digits;
    char *buffer;
    const char *ptr;

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

    temp = result;
    digits = 0;
    while (temp > 0)
    {
        temp /= 10;
        digits++;
    }

    buffer = malloc(digits + 1);
    if (buffer == NULL)
        return (1);

    buffer[digits] = '\0';
    while (digits--)
    {
        buffer[digits] = result % 10 + '0';
        result /= 10;
    }

    ptr = buffer;
    while (*ptr)
        _putchar(*ptr++);

    _putchar('\n');

    free(buffer);

    return (0);
}

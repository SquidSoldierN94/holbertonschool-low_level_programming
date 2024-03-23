#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "3-calc.h"

int _putchar(char c);

int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        const char *error = "Error\n";
        while (*error != '\0') {
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
        while (*error != '\0') {
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
    return write(1, &c, 1);
}

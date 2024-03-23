#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        char *error = "Error\n";
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

    if (op_func == NULL)
    {
        char *error = "Error\n";
        while (*error)
        {
            _putchar(*error);
            error++;
        }
        return (99);
    }

    if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
    {
        char *error = "Error\n";
        while (*error)
        {
            _putchar(*error);
            error++;
        }
        return (100);
    }

    result = op_func(num1, num2);

    _putchar(result + '0');
    _putchar('\n');

    return (0);
}

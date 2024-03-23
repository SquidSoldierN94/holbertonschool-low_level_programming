#include <stdlib.h>
#include "3-calc.h"

int _putchar(char c);

int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*op_func)(int, int);

    if (argc != 4 || !argv[2][1])
        return (_putchar('E') + _putchar('r') + _putchar('r') + _putchar('o') + _putchar('r') + _putchar('\n') + 98);

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    op_func = get_op_func(argv[2]);

    if (!op_func || ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0))
        return (_putchar('E') + _putchar('r') + _putchar('r') + _putchar('o') + _putchar('r') + _putchar('\n') + 99);

    result = op_func(num1, num2);

    if (result < 0 || result / 10)
        _putchar(result / 10 + '0');
    _putchar(result % 10 + '0');
    _putchar('\n');

    return (0);
}

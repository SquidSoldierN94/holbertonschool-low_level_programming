#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);

    int (*op_func)(int, int) = get_op_func(argv[2]);
    if (op_func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    printf("%d\n", op_func(num1, num2));

    return (0);
}
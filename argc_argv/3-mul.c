#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int result;

    if (argc != 3)
    {
        printf("error\n");
        return (1);
    }

    result = atoi(argv[1]) * atoi(argv[2]);
    printf("%d\n", result);

    return (0);
}

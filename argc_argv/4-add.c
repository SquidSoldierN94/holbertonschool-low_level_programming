#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Checks if a string represents a positive number
 * @s: The string to check
 *
 * Return: 1 if s is a positive number, 0 otherwise
 */
int is_positive_number(char *s)
{
    while (*s)
    {
        if (*s < '0' || *s > '9')
            return (0);
        s++;
    }
    return (1);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
    int sum = 0;
    int i;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (i = 1; i < argc; i++)
    {
        if (!is_positive_number(argv[i]))
        {
            printf("Error\n");
            return (1);
        }
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);
    return (0);
}

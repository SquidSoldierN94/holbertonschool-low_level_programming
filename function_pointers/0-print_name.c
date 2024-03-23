#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: Pointer to the name to be printed
 * @f: Pointer to the function to be used to print the name
 *
 * This function prints a name using the specified function.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
        return;

    f(name);
}

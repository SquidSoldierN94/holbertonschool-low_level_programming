#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    int num;

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                putchar(va_arg(args, int));
                break;
            case 'i':
                num = va_arg(args, int);
                if (num < 0)
                {
                    putchar('-');
                    num = -num;
                }
                if (num / 10)
                    print_number(num / 10);
                putchar(num % 10 + '0');
                break;
            case 'f':
                print_float(va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    print_string("(nil)");
                else
                    print_string(str);
                break;
        }

        if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i' ||
            format[i] == 'f' || format[i] == 's'))
            putchar(',');

        if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i' ||
            format[i] == 'f' || format[i] == 's'))
            putchar(' ');

        i++;
    }

    putchar('\n');

    va_end(args);
}

/**
 * print_number - Prints an integer recursively
 * @n: The integer to print
 */
void print_number(int n)
{
    if (n / 10)
        print_number(n / 10);
    putchar(n % 10 + '0');
}

/**
 * print_float - Prints a float
 * @f: The float to print
 */
void print_float(double f)
{
    int i_part = (int)f;
    print_number(i_part);
    putchar('.');
    int d_part = (f - i_part) * 1000000;
    print_number(d_part);
}

/**
 * print_string - Prints a string
 * @s: The string to print
 */
void print_string(char *s)
{
    while (*s)
    {
        putchar(*s);
        s++;
    }
}

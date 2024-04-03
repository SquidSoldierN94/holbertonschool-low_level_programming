#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        size_t i = 0;

        if (h->str == NULL)
        {
            _putchar('[');
            _putchar('0');
            _putchar(']');
            _putchar(' ');
            _putchar('(');
            _putchar('n');
            _putchar('i');
            _putchar('l');
            _putchar(')');
            _putchar('\n');
        }
        else
        {
            size_t len = h->len;
            size_t divisor = 1;

            while (len / divisor >= 10)
                divisor *= 10;

            while (divisor != 0)
            {
                _putchar((len / divisor) + '0');
                len %= divisor;
                divisor /= 10;
            }

            _putchar(' ');

            while (h->str[i] != '\0')
            {
                _putchar(h->str[i]);
                i++;
            }

            _putchar('\n');
        }
        count++;
        h = h->next;
    }

    return count;
}

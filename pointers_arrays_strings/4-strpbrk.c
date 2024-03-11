#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: A pointer to the string to search within.
 * @accept: A pointer to the substring containing valid characters.
 *
 * Return: The number of bytes in the initial segment of s which consist
 *         only of bytes from accept.
 */
char *_strpbrk(char *s, char *accept)
{
    unsigned int count = 0;
    char *s_ptr;
    char *accept_ptr;

    while (*s != '\0') {
        s_ptr = s;
        accept_ptr = accept;

        while (*accept_ptr != '\0') {
            if (*s_ptr == *accept_ptr) {
                count++;
                break;
            }
            accept_ptr++;
        }

        if (*accept_ptr == '\0') {
            return count;
        }

        s++;
    }

    return count;
}

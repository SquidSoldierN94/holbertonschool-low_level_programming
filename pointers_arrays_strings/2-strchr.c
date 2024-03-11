#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring needle
 *           in the string haystack.
 * @haystack: A pointer to the string to search within.
 * @needle: A pointer to the substring to search for.
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 *         if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *haystack_ptr, *needle_ptr;

    while (*haystack != '\0') {
        haystack_ptr = haystack;
        needle_ptr = needle;

        while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr) {
            haystack_ptr++;
            needle_ptr++;
        }

        if (*needle_ptr == '\0') {
            return haystack;
        }

        haystack++;
    }

    if (*needle == '\0') {
        return haystack;
    }

    return NULL;
}

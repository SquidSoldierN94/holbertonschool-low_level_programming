#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337
 * @s: The string to be encoded
 *
 * Return: A pointer to the modified string
 */
char *leet(char *s)
{
    int i, j;
    char leet_letters[] = "aAeEoOtTlL";
    char leet_codes[] = "4433007711";

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; leet_letters[j] != '\0'; j++)
        {
            if (s[i] == leet_letters[j])
            {
                s[i] = leet_codes[j];
                break;
            }
        }
    }

    return s;
}

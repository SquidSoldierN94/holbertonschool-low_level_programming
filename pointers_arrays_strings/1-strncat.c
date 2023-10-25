#include "main.h"
/**
*_strncat - Conitnue as asked
*@dest: Destination
*@src: Source
*@n: Cause and effect
*
*Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int amogus = 0, j = 0;

while (dest[amogus])
{
amogus++;
}
while (j < n && src[j])
{
dest[amogus] = src[j];
amogus++;
j++;
}
dest[amogus + n + 1] = '\0';
return (dest);
}

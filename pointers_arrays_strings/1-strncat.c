#include "main.h"
/**
*_strncat - This fina do shit
*@dest: Destination
*@src: Source
*
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

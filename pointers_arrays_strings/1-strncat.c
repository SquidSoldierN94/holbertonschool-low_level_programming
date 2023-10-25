#include "main.h"
/**
*_strncat - This fina do shit
*@dest: Destination
*@src: Source
*
*/
char *_strncat(char *dest, char *src, int n)
{
int dlen = 0;

while (dest[dlen])
{
dlen++;
}
for (n = 0; src[n] != 0; n++)
{
dest[dlen] = src[n];
dlen++;
}
dest[dlen] = '\0';
return (dest);
}

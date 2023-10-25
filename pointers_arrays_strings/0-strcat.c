#include "main.h"
/**
*_strcat - Does shit
*@src: From
*@dest: Out of
*
*Return: 
*/
char *_strcat(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}

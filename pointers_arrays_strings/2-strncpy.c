#include "main.h"
/**
*_strncpy - Does some stuff idk
*@dest: Destination
*@src: Source
*
*Return: SUCCESS
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
{
return (0)
}
}

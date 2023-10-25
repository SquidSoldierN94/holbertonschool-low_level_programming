#include "main.h"
#include <string.h>
/**
*_strcpy - Copies a string to a buffer i think
*@src - the source of the string
*@dest - where the string is copied
*
*/
char *_strcpy(char *dest, char *src)
{
memset (dest, 0, sizeof dest);
strncpy (dest, src, sizeof dest -1);
}
{
return (0);
}

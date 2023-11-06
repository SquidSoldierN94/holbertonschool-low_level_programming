#include "main.h"
#include <stdlib.h>
/**
*_strdup - Does what it says lmao
*@str: String dat shit
*
*
*Return: Stuff idk
*/
char *_strdup(char *str)
{
char *s;
int a = 0, i = 1;

if (str == NULL)
return (NULL);

while (str[i])
{
i++;
}

s = malloc((sizeof(char) * 1) + 1);
if (s == NULL)
return (NULL);

while (a < 1)
{
s[a] = str[a];
a++;
}
 s[a] = '\0';
return (s);
}

#include "main.h"
#include <stdlib.h>
/**
*create_array - Guess
*@size: Random shit
*@c: no fucking clue tbh
*
*Return: Nothing
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;

if (size == 0)
return (NULL);
{
s = malloc(size * sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
}

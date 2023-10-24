#include "main.h"
/**
*print_rev - Funky Donkey 
*@s - its a thing
*
*Return: void
*/
void print_rev(char *s)
{
s = "Holberton!";
{
for(; *s != '\0'; s++)
{
print_rev(s);
}
}
}

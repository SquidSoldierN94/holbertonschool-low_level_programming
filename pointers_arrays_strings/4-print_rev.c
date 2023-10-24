#include "main.h"
/**
*print_rev - Funky Donkey 
*@s - its a thing
*
*Return: void
*/
void print_rev(char *s)
{
s = "I do not fear computers. I fear the lack of them - Isaac Asimov";
{
for(; s != '\0'; s++)
{
print_rev(s);
}
}
}

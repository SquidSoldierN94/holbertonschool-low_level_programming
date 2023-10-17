#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Digits
*
*Return: Always 0 (Success)
*/
int main(void)
{
char chara;
for (chara = 'a' ; chara <= 'z' ; chara++)
if (chara != 'e' && chara != 'q')
{
putchar(chara);
}
{
putchar('\n');
}
return (0);
}

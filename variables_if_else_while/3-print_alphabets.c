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
{
putchar(chara);
}
for (chara = 'A' ; chara <= 'Z' ; chara++)
{
putchar(chara);
}
putchar('\n');
return (0);
}

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
int num;
char chara;
for (num = 0 ; num < 10 ; num++)
{
putchar(num + '0');
}
for (chara = 'a' ; chara <= 'g' ; chara++)
{
putchar(chara);
}
{
putchar('\n');
}
return (0);
}

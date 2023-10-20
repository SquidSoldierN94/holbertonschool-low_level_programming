#include "main.h"
/**
*jack_bauer - Whos this guy
*
*Return: ...
*
*/
void jack_bauer(void)
{
int m2, m1, s2, s1;
{
for (s1 = 0; s1 < 9; s1++)
{
for (s2 = 0; s2 < 9; s2++)
{
for (m1 = 0; m1 < 3; m1++)
{
for (m2 = 0; m2 < 2; m2++)
{
if (m2 < 2 && m1 < 3)
{
_putchar(m2 + '0');
_putchar(m1 + '0');
_putchar(58);
_putchar(s2 + '0');
_putchar(s1 + '0');
_putchar('\n');
}
}
}
}
}
}
}

#include "main.h"
/**
*print_alphabet_x10 - Digits
*
*Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
 char chara;
 while(chara < 10)
 {
  for (chara = 'a'; chara <= 'z'; chara++)
   {
    _putchar(chara);
   }
  }
 _putchar('\n');
}

#include "main.h"
/**
* print_alphabet - print alphabet in lowercase
* Return : void
*/
void print_alphabet_x10(void)
{
int count = 0;
char c;
while (count < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
count++;
}
}
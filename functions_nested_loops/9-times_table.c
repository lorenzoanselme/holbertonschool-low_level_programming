#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
int row, col, prod;
row = 0;
while (row <= 9)
{
col = 0;
while (col <= 9)
{
prod = row *col;
if (col != 0)
{
_putchar(',');
_putchar(' ');
if (prod < 10)
{
_putchar(' ');
}
}
if (prod >= 10)
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
else
{
_putchar(prod + '0');
}
col++;
}
_putchar('\n');
row++;
}
}

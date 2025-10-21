#include "main.h"
/**
* _isalpha - checks for alphabetic charactere
*
* @c: The character to check
*
* Return: 1 if lowercase, 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}

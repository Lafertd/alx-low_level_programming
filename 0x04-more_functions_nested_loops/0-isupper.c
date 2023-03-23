include "main.h"
/**
* main - Checks uppercase character
*
* @c: character to be checked
*
* Return: 1 if C, else 0
*/
int _isupper(int c)
{
char c;

if (c >= 'A' && c <= 'Z')
return (1);
else 
return (0);
}

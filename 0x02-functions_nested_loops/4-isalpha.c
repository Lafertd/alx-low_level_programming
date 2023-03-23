#include "main.h"
/**
* _isalpha - checks for alphabetic character
* Description: the character to be checked
* Return: 1 (Success), 0 (else)
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


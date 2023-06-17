#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - function that takes a binary number
 * and convert it to decimal number
 * Description: this function calculates the unit of binary (base^n * *b)
 * @b: string pointer that points at the binary numbers
 * Return: return(Converted number: if the binary are 0,1)
 * otherwise it return 0
 */

unsigned int binary_to_uint(const char *b)
{
const char *str;
str = b;
unsigned int i;
int unsigned j;
int n;
n = i - 1;
int uint;

if (*str != '0' || *str != '1' || str != NULL)
{
return (0);
}
else
for (i = strlen(str); str != NULL; i--)
{
for (j = 0; j <= n; j++)
{
uint = (n * n);
uint += uint;
}
uint = ((uint)*(*str));
uint += uint;
}
return (uint);
}

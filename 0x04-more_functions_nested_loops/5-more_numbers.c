#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
int n = 0;
int t = 0;

while (t < 10)
{
while (n <= 14)
{
if (n >= 10)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
n++;
}
n = 0;
t++;
_putchar('\n');
}
}

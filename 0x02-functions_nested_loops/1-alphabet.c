#include "main.h"
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char lc;
for (lc = 'a'; lc <= 'z'; lc++)
_putchar(lc);
_putchar('\n');
}

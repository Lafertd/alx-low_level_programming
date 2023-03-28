#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int as parameter and
 * updates the value it points to to 98
 * @n: pointer to uptade
 *
 * Return: void
 */
void reset_to_98(int *n)
{
int n;

    n = 402;
    _putchar("n=%d\n", n);
    *n = 98;
    _putchar("n=%d\n", n);
    return (0);}

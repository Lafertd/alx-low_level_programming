#include "main.h"
/**
 * 1-swap - swap two integers
 * @a: first integer
 * @b: second integer
 * return - int(*a,*b)
 */

void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}

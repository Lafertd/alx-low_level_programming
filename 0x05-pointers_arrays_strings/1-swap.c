#include "main.h"
/**
 * swap_int - swap two integers
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

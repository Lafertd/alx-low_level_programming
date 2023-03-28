#include "main.h"
/**
 * 1-swap - swap two integers
 * @a: first integer
 * @b: second integer
 * return - int(*a,*b)
 */

void swap_int(int *a, int *b)
{
int *a = &b;
int b = *a;
int *b = &a;
int a = *b;
}

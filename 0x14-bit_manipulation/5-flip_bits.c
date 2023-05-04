#include "main.h"

/**
 * flip_bits - function flip
 * @n: number to be flipped
 * @m: result number
 *
 * Return:  the number of bits you would need to flip to get from one number
 * to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned long int b = 0;

	while (diff != 0)
	{
		b += 1 & diff;
		diff >>= 1;
	}

	return (b);
}

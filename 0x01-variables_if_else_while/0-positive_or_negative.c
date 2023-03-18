#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main - positive, negative, and zero
  *
  * Description: print the positivity or negativity of n
  *
  * Return: return 0 (Solved)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}

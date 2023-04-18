#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that add positive numbers
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Return: 0 if the arguments are numbers, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}

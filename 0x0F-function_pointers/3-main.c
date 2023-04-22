#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that operate numbers
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int (*func)(int, int);
	int result, n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	result = func(n1, n2);
	printf("%d\n", result);
	return (0);
}

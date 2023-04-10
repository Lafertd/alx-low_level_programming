#include "main.h"
#include "stdio.h"
#include <stdlib.h>
/**
 * main - function that print the name of the program
 * @argc: the number of arguments passed
 * @argv: the argument names passed
 *
 * Return: return 0(Solved), 1(Error)
 */
int main(int argc, char **argv)
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int result = a * b;
if (argc == 3)
{
printf("%d\n", result);
return (0);
}
}

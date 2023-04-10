#include "main.h"
#include "stdio.h"

/**
 * main - function that print the name of the program
 * @argc: the number of arguments passed
 * @argv: the argument names passed
 *
 * Return: return 0(Solved), 1(Error)
 */
int main(int argc, char **argv)
{
int a = 0, b = 0;
int result = a * b;
if (argc == 3)
for (int i = 0; i < strlen(**argv); i++)
{
int a = a * 10 + (argv[i] - '0');
}
for (int j = 0; j < strlen(**argv); j++)
{
int b = b * 10 + (agrv[j] - '0');
}
{
printf("%d\n", result);
}
return (0);
if (argc != 3)
{
printf("Error");
}
return (1);
}

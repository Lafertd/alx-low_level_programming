#include "main.h"
#include "stdio.h"

/**
 * main - function that print the name of the program
 * @argc: the number of arguments passed
 * @argv: the argument names passed
 *
 * Return: return 0(Solved)
 */

int main(int argc, char **argv)
{
int (i);
char name __attribute__((unused)) = **argv;
i = argc - 1;
{
printf("%d\n", i);
}
return (0);
}

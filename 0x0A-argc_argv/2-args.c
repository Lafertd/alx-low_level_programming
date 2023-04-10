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
int i;
/**char name __attribute__((unused)) = **argv;*/

for (i = 0; i < argc; i++)
/** i = argc - 1; */
{
printf("%s\n", argv[i]);
}
return (0);
}

#include <stdio.h>
/**
* main - C program that prints the size of various data types
*
* Description: initiate data types variables, print the sizes
*
* Return: return 0 (SUCCESS)
*/
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of a char: %i byte(s)\n", sizeof(c));
printf("Size of an int: %i byte(s)\n", sizeof(i));
printf("Size of a long int: %i byte(s)\n", sizeof(li));
printf("Size of a long long int: %i byte(s)\n", sizeof(lli));
printf("Size of a float: %i byte(s)\n", sizeof(f));
return (0);
}

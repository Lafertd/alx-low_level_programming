#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to convert
 *
 * Return: number
 */
int _atoi(char *s)
{
	int pos = 0;
	int sign = 1;
	int n = 0;

	while ((s[pos] < '0' || s[pos] > '9') && s[pos] != '\0')
	{
		if (s[pos] == '-')
			sign *= -1;
		pos++;
	}
	while (s[pos] >= '0' && s[pos] <= '9')
	{
		n = n * 10 + sign * (s[pos] - '0');
		pos++;
	}
	return (n);
}

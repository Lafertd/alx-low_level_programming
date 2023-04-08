#include "main.h"
/**
 *_strlen - function that returns the length of a string
 * @s: string to measure
 * Description: string lenght
 * Return: size
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != 0)
	{
		count++;
	}
	return (count);

}

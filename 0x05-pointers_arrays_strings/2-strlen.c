#include "main.h"
/**
 *_strlen - function that returns the length of a string
 * @s: string to measure
 * description: string lenght
 * return: size
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

#include "main.h"

/**
 * _strncat - function that concatenates 2 strings
 * @dest: string to be concatenate to
 * @src: string to concatenate from
 *
 * Return: string concatenated
 */

char *_strncat(char *dest, char *src, int n);
{
        int i = 0;
        int j = 0;

        while (dest[i] != 0)
                i++;
        while (src[j] != 0)
        {
                dest[i] = src[j];
                i++;
                j++;
        }
        int n = sizeof(src)

	if (i < n)
        {
        dest[i] = '\0';
        }
        return (dest);
}

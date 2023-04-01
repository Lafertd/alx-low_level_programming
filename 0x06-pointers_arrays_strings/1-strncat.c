#inlcude "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: bytes from src to be appened
 *
 * Return: pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
    int i;
    for (i = 0; dest[i] != '\0'; i++)
        ;

    int j;
    for (j = 0; j < n && src[j] != '\0'; j++)
        dest[i + j] = src[j];

    if (j < n)
        dest[i + j] = '\0';

    return dest;
}

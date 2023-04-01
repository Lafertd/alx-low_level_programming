#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string to append to
 * @src: the source string to append from
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
  char *p = dest;

  /* Find the end of dest */
  for (int i = 0; dest[i] != '\0'; i++)
  {  p = &dest[i];
  }

  /* Copy src to the end of dest */
  for (int i = 0; src[i] != '\0'; i++)
  {
    *p = src[i];
    p++;
  }

  /* Add a terminating null byte */
  *p = '\0';

  /* Return a pointer to the resulting string dest */
  return (dest);
}

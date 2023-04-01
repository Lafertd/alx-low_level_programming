#inlcude "main.h"
/**
 * _strncat - function that copies a string
 * @dest: destination string to copy to
 * @src: source string to copy from
 * @n: bytes from src to be appened
 *
 * Return: pointer to string dest (Solved)
 */

char *_strncpy(char *dest, char *src, int n)
{
               int i = 0;

               while (i < n && src[i] != '\0')
	       {       i++;
	          dest[i] = src[i];
	       }
               while (i < n)
	       {       i++;
                   dest[i] = '\0';
	       }
               return (dest);
           }

#include "main.h"

/**
 * compare_strings - function that compares two strings
 * @str1: string 1
 * @str2: string 2
 *
 * Return: comparison
 */
int compare_strings(char *str1, char *str2)
{
    int i = 0;

    while (str1[i] != 0 && str2[i] != 0 && str1[i] == str2[i])
    {
        i++;
    }
    return (str1[i] - str2[i]);
}

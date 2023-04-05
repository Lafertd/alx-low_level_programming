#include "main.h"

/**
 * _strlen_recursion - function that prints a string in reverse
 * @s: pointer to char variable
 *
 * Return: return int (Solved)
 */
int _strlen_recursion(char *s);
{
        if (*s == 0)
        {
                _putchar('\n');
                return 0;
        }
        _strlen_recursion(s + 1);
        _putchar(*s);
}

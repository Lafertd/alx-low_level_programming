#include main.h
/**
 * _puts_recursion - function that prints a string
 * @s: pointer to char variable
 *
 * Return: return 0 (Solved)
 */
void _puts_recursion(char *s) {
    if (*s == '\0') {
	    _putchar('\n');
	   return 0;
    }
    {   _putchar(*s);
        _puts_recursion(s + 1);
    }
}

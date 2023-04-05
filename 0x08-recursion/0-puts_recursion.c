#include main.h
/**
 * _puts_recursion - function that prints a string
 * @s: pointer to char variable
 *
 * Return: return 0 (Solved)
 */
void _puts_recursion(char *s) {
    if (*s != '\0') {
	   return 0;
    }
    {   putchar(*s);
        _puts_recursion(s + 1);
    }
}

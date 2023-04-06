#include "main.h"

/**
 * find_root - find square root of a number
 * @root: int number
 * @n: int number
 *
 * Return: the root of n
 */
int find_root(int root, int n)
{
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);
	return (find_root(root + 1, n));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: int number
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (find_root(1, n));
}

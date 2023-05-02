#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to head
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *actual;
	size_t i;

	actual = h;
	for (i = 0; actual; i++)
	{
		printf("%i\n", actual->n);
		actual = actual->next;
	}

	return (i);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_list -  function that prints all the elements of a list_t list.
 * @h: pointer to the head
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *t;
	int n;

	t = h;
	for (n = 0; t; n++)
	{
		if (t->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", t->len, t->str);
		t = t->next;
	}
	return (n);
}

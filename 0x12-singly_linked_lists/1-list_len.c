#include "lists.h"

/**
 * list_len -  function that returns the number of elements in a linked
 * list_t list
 * @h: pointer to the header
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t e = 0;
	const list_t *t;

	t = h;
	for (e = 0; t; e++)
		t = t->next;

	return (e);
}

#include "lists.h"

/**
 * listint_len -  function that returns the number of elements in a linked
 * listint_t list
 * @h: pointer to head
 *
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *actual;
	size_t i;

	actual = h;
	for (i = 0; actual; i++)
		actual = actual->next;

	return (i);
}

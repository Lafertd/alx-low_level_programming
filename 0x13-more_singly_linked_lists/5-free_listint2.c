#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - unction that frees a listint_t list
 * @head: pointer to pointer to head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *actual;

	if (head == NULL)
		return;

	while (*head)
	{
		actual = (*head)->next;
		free(*head);
		*head = actual;
	}
}

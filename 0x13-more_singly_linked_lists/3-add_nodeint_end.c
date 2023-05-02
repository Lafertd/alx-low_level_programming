#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t
 * list
 * @head: pointer to pointer to head
 * @n: element to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *actual;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	actual = *head;
	while (actual->next)
		actual = actual->next;
	actual->next = new;
	return (new);
}

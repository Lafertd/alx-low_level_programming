#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a
 * listint_t list
 * @head: pointer to pointer to head
 * @n: element to be added to the new node
 *
 * Return: a pointer to new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * linked list
 * @head: pointer to head
 * @index: index of a node
 *
 * Return: pointer to a nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_n;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	node_n = head;
	for (i = 0; i < index; i++)
	{
		node_n = node_n->next;
		if (node_n == NULL)
			return (NULL);
	}
	return (node_n);
}

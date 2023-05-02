#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index index of
 * a listint_t linked list
 * @head: pointer to pointer to head
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node1, *node2;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);


	node2 = *head;

	if (index != 0)
	{
		for (i = 0; i < index; i++)
		{
			node1 = node2;
			node2 = node2->next;
			if (node2 == NULL)
				return (-1);
		}
		node1->next = node2->next;
		free(node2);
	}
	else
	{
		*head = node2->next;
		free(node2);
	}
	return (1);
}

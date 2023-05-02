#include "lists.h"

/**
 * find_listint_loop3 - function that finds the loop in a linked list
 * @head: pointer to head
 *
 * Return: The address of the node where the loop starts, or NULL if there
 * is no loop
 */
listint_t *find_listint_loop3(listint_t *head)
{
	listint_t *node1, *node2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	node1 = head->next;
	node2 = (head->next)->next;

	while (node2)
	{
		if (node1 == node2)
		{
			node1 = head;
			while (node1 != node2)
			{
				node1 = node1->next;
				node2 = node2->next;
			}
			return ((listint_t *)node1);
		}
		node1 = node1->next;
		node2 = (node2->next)->next;

	}

	return (NULL);
}

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer to pointer to head
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node, *tmp;
	size_t i;

	node = find_listint_loop3(*h);

	if (node == NULL)
	{
		for (i = 0; h != NULL && *h != NULL; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		for (i = 0; *h != node; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		i++;
		for (; *h != node; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;
	return (i);
}

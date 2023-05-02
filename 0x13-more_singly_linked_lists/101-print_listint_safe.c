#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop2 - function that finds the loop in a linked list
 * @head: pointer to head
 *
 * Return: The address of the node where the loop starts, or NULL if there
 * is no loop
 */
listint_t *find_listint_loop2(const listint_t *head)
{
	const listint_t *node1, *node2;

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
 * print_listint_safe - function that prints all the elements of a list
 * @head: pointer to head
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	size_t i;

	node = find_listint_loop2(head);

	if (node == NULL)
	{
		for (i = 0; head; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; head != node; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
		for (; head != node; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (i);
}

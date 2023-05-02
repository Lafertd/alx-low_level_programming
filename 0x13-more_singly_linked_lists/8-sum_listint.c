#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a
 * listint_t linked list
 * @head: pointer to head
 *
 * Return: sum of all data of a list or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *actual;
	int sum = 0;

	if (head == NULL)
		return (0);
	actual = head;
	while (actual)
	{
		sum += actual->n;
		actual = actual->next;
	}
	return (sum);
}

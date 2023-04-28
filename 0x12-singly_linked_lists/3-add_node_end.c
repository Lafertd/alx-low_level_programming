#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to pointer to head
 * @str: str to be added
 *
 * Return: a pointer to the new head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str2;
	int i;
	list_t *new, *t;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	str2 = strdup(str);
	if (str2 == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;

	new->str = str2;
	new->len = i;
	new->next = NULL;

	if (*head != NULL)
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;
		t->next = new;
	}
	else
	{
		*head = new;
	}

	return (*head);
}

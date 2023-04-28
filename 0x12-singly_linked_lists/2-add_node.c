#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head
 * @str: string to be added
 *
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str2;
	int i;
	list_t *new;

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
	new->next = *head;
	*head = new;

	return (new);
}

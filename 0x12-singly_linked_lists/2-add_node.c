#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of the list.
 * @head: is the new node to add to the list.
 * @str: string inside the node.
 * Return: list of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
		unsigned int g = 0;

	if (!str)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		while (new->str[g])
			g++;
		new->len = g;
		new->next = *head;
		*head = new;
		return (new);
	}
	return (NULL);
}

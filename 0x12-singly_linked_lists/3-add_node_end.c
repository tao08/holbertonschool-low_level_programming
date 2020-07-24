#include"lists.h"
/**
 * add_node_end - adds a new node at the end of the list.
 * @head: is the new node to add to the list.
 * @str: string inside the node.
 * Return: list of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux;
	unsigned int g = 0;

	if (!str)
		return (NULL);
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
		new->next = NULL;
		if (!*head)
		{
			*head = new;
			return (new);
		}
		aux = *head;
		while (aux->next)
			aux = aux->next;
		aux->next = new;
		return (new);
	}
	return (NULL);
}

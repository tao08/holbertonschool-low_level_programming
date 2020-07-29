#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @n: nodes
 * @head: first node
 * Return: New node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nuevo;

	new = malloc(sizeof(listint_t));
	if (nuevo == NULL)
	{
		return (NULL);
	}
	if (nuevo)
	{
		nuevo->n = n;
		nuevo->next = *head;
		*head = nuevo;
		return (nuevo);
	}
	free(nuevo);
	return (NULL);
}

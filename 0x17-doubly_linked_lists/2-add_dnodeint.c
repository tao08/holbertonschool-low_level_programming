#include "lists.h"
/**
 *add_dnodeint - add the nodes in a linked list
 *@head: head of thde list
 *@n:data number int
 * Return: The number of nodes in counter
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}

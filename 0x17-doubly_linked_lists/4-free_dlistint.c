#include "lists.h"
/**
 * free_dlistint - function to free.
 * @head: pointer to head.
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list_free;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		list_free = head;
		head = head->next;
		free(list_free);
	}
}

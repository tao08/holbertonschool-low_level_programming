#include "lists.h"
/**
 * delete_dnodeint_at_index - function to delete node at index
 * @head: double pointer of dlistint_t type to head of linked list
 * @index: index at which node will be deleted
 * Return: 1 if successful or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1, *temp = *head;
	unsigned int contador = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	while (contador < (index - 1))
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		contador++;
	}
	temp1 = temp->next->next;
	if (temp->next->next != NULL)
		temp->next->next->prev = temp;
	free(temp->next);
	temp->next = temp1;
	return (1);
}

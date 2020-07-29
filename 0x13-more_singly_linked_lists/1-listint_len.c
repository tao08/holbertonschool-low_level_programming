#include "lists.h"

/**
 * listint_len - check the code for Holberton School students.
 * @h: nodos.
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *nodo = h;

	for (count = 0; nodo != NULL; count++)
	{
		nodo = nodo->next;
	}
	return (count);
}

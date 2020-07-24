#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len- returns the number of elements in a linked list
 * @h: argumentos
 * Return: el numero de nudos
 **/
size_t list_len(const list_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		count++;

		h = h->next;
	}
	return (count);
}

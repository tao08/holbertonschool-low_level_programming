#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - that prints all the elements of a list the function
 * @h: variable pointer get list to printor
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;


	while (h != '\0')
	{
		if (h ->str == '\0')
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->str);
			h = h->next;
		}
		count++;
	}
	return (count);
}
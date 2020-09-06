#ifndef _LIST_H
#define _LIST_H
/*Space to import libraries*/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/*Space to define structures*/
/**
* struct dlistint_s - doubly linked list
* @n: integer
* @prev: points to the previous node
* @next: points to the next node
*
* Description: doubly linked list node structure
* for Holberton project
*/
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);


#endif
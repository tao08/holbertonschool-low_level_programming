#include "holberton.h"
/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: variable pointer
 * @b: variable pointer
 * Retourn : Always viod
 **/
void swap_int(int *a, int *b)
{
	int  g;

	g = *a;
	*a = *b;
	*b = g;

	return (0);
}

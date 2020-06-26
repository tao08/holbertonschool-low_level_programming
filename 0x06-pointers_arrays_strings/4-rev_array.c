#include "holberton.h"

/**
 * reverse_array - Write a function that reverses the content
 * @a: punter
 * @n: variable
 *
 */
void reverse_array(int *a, int n)
{
	int g, v;

	n--;
	for (g = 0; g < n; g++, n--)
	{
		v = a[g];
		a[g] = a[n];
		a[n] = v;
	}
}

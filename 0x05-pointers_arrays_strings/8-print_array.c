#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints a string in reverse
 *
 * @a: string in reverse
 * @n: variable
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int code;

	for (code = 0; code < n; code++)
	{
		if (code == n - 1)
		{
			printf("%d", a[code]);
		}
		else
			printf("%d, ", a[code]);
	}
	printf("\n");
}

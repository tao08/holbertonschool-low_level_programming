#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - that converts a binary number to an unsigned int
 * @b: variable pointer
 * Description: Write a function that converts a binary number
 * Return: the converted number, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int g, x = 0;

	if (b == NULL)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		x++;
	}
	number = 0;
	for (g = 0; b[g] != '\0'; g++)
	{
		number = number << 1;

		if (b[g] == '1')
			number = number + 1;
	}
	return (number);
}

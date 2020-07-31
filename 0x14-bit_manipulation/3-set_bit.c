#include <stdio.h>
#include "holberton.h"
/**
 * set_bit - get a bit
 * @n: Variable npntero
 * @index: Position indice
 * Return: An integer or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}

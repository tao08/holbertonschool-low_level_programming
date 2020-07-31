#include <stdio.h>
#include "holberton.h"
/**
 *flip_bits - clear a bit
 *@n: Variable n
 *@m: the next position
 *Return: An integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int g, y = 0;

	g = n ^ m;

	while (g > 0)
	{
		if ((g & 1) != 0)
			y++;

		g = g >> 1;
	}
	return (y);
}

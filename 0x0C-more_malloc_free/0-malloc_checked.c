#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - Write a function
 * @b: this is a variable int
 * Return: 98
 *
 */
void *malloc_checked(unsigned int b)
{
	void *str = 0;

	str = malloc(b);

	if (str == 0)

	{
		exit(98);
	}
	else
	{
		return (str);
	}

}

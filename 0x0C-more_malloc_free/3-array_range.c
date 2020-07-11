#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - This will create an array of integers
 * @min: min number alloed in the array
 * @max: max number alloed in the array
 * Return: superptr pointer of the array
 */
int *array_range(int min, int max)
{
	int g;
	int w;
	int *ptr;

	if (min > max)
	{
		return ('\0');
	}
	w = max - min + 1;
	ptr = malloc(w * sizeof(int));
	if (ptr == '\0')
		return ('\0');
	for (g = 0; g < w; g++, min++)
		ptr[g] =  min;
	return (ptr);
}

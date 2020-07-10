#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - this is a funtion por posicion
 * @nmemb: this is a variable
 * @size: this is a espacio de memoria
 * Return: g
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *g;
	unsigned int  w;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}

	g = malloc(nmemb * size);

	if (g == '\0')
	{
		return ('\0');
	}
	for (w = 0; w < nmemb * size; w++)
	{
		g[w] = 0;
	}
	return (g);
}

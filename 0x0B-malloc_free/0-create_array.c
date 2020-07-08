#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - this is funtion
 * @size: es el tamaño de memoria
 * @c: this is a variable
 * Return: s
 **/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int  w;

	if  (size == 0)
		return ('\0');

	s = malloc(size * (sizeof(char)));
	if (s == '\0')
	{
		return ('\0');

	}
		for (w = 0; w < size; w++)
			s[w] = c;
		return (s);


}

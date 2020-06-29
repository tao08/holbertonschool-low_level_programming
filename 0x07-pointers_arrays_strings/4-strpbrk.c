#include "holberton.h"
/**
 * _strpbrk - search any string in a byte set.
 * @s: this is a string
 * @accept: this is apunter
 * Return: 0
 **/
char *_strpbrk(char *s, char *accept)
{
	char *g;


	while (*s != '\0')
	{
		g = accept;

		while (*g != '\0')
		{
			if (*s == *g)

			return (s);
			g++;
		}

		s++;
	}


	return (0);
}

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - this is a funtion
 * @s1: this is a punteros
 * @s2: this is a punter
 * @n: this is a variable
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *g;
	unsigned int w, h;

	if (s1 == '\0')

		s1 = "";

	if (s2 == '\0')

		s2 = "";

	while (s1[w] != '\0')
		w++;
	while (s2[h] != '\0')
		h++;
	if (n > w)
		n = w;
	g = malloc((w + n + 1) * sizeof(char));
	if (g != '\0')
	{
		for (w = 0; s1[w] != '\0'; w++)
			g[w] = s1[w];
		for (h = 0; h < n; h++, w++)
			g[w] = s2[h];
		g[w] = '\0';
		return (g);
	}
	return ('\0');
}

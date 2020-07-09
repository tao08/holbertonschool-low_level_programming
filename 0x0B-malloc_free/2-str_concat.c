#include"holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - this  is  a funtiopn
 * @s1: pointer.
 * @s2: pointer.
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *g;
	int count = 0, w, j;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	while (s1[count] != '\0')
		count++;
	while (s2[count] != '\0')
		count++;
	g = (char *)malloc(count * sizeof(char));
	if (g != '\0')
	{
		for (w = 0; s1[w] != '\0'; w++)
			g[w] = s1[w];
		for (j = 0; s2[j] != '\0'; j++, w++)
			g[w] = s2[j];
		return (g);
	}
	return ('\0');
}

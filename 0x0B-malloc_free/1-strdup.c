#include "holberton.h"
/**
 * strdup - this is a funtion
 * @str: this is a variable
 * Return: 0
 *
 **/
char *_strdup(char *str)
{
	char *g;
	int count = 0, w;

	if (str == '\0')
		return ('\0');

	while (str[count] != '\0')
		count++;
	count++;
	g = malloc(count * sizeof(char));
	if (g != '\0')
	{
		for (w = 0; w <= count; w++)
			g[w] = str[w];
		return (g);
	}
	return ('\0');


}

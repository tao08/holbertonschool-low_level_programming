#include "holberton.h"

/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: this is a punter
 * @src: this is a punter
 * @n: this is a int
 * Return: origin
 */
char *_strncat(char *dest, char *src, int n)
{
	char *g = dest;
	int x = 0;

	while (*dest != '\0')
		dest++;

	while (x < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		x++;
	}

	*dest = '\0';
	return (g);
}

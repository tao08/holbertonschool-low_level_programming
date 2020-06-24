#include "holberton.h"

/**
 * *_strcpy - check the code for Holberton School students.
 * @dest: this a pointer
 * @src: this is a pointer
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int g;
	char a;

	for (g = 0; src[g] != '\0'; g++)
	{
		a = src[g];
		dest[g] = a;
	}
	dest[g] = '\0';
	return (dest);
}

#include "holberton.h"
/**
 * _strncpy - Write a function that copies a string.
 * @dest: this is a punter
 * @src : this is a punter
 * @n: variable entera
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int g;

	for (g = 0; g < n && src[g] != '\0'; g++)
		dest[g] = src[g];

	return (dest);
}

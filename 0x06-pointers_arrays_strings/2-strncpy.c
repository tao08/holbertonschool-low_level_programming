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

	for (g = 0; src[g] != '\0'; g++) /*this is a count*/
	{
		if (g < n)
		{
			dest[g] = src[g]; /*matching*/
		}
	}
	for (; g < n; g++)
	{
		dest[g] = '\0';
	}
	return (dest);
}

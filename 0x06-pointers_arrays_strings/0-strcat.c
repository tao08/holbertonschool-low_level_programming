#include "holberton.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: this is a punter
 * @src: this is a punter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
        int  a;
	int b;

	for ( a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}

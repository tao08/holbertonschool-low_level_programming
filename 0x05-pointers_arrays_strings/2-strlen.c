#include "holberton.h"


/**
 * _strlen - return the longitud
 *
 * @s: this is for check
 *
 * Return: g
 */
int _strlen(char *s)
{
	int g;

	for (g = 0; *s != '\0'; g++)
	{
		s++;
	}
	return (g);
}

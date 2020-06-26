#include "holberton.h"
/**
 * _strcmp - Write a function that compares two strings.
 * @s1: this is a punter
 * @s2: this  is a punter
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

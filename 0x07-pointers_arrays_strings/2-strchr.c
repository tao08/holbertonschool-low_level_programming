#include "holberton.h"
/**
 * *_strchr - Write a function that locates a character in a string.
 * @s: this is a punter
 * @c: this is a constan
 * Return: 0.
 **/
char *_strchr(char *s, char c)
{
	while (*s++)
	{

		if (*s == c)
			return (s);
	}

	return (0);
}

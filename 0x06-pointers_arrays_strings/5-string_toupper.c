#include "holberton.h"

/**
 * string_toupper - Convert a string lower to upper
 * @s: A string
 * Return: S
 */
char *string_toupper(char *s)
{
	int g = 0;

	while (s[g] != '\0')
	{
		if (s[g] >= 97 && s[g] <= 122)
		{
			s[g] = s[g] - 32;
		}
		g++;
	}
	return (s);
}

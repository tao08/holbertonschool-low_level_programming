#include "holberton.h"
/**
 *rev_string - reverses a string
 *
 * @s: string to reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a;
	int b;
	int c;
	char g;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	for (b = 0, c = a - 1; b < c; b++, c--)
	{
		g = s[b];
		s[b] = s[f];
		s[c] = g;
	}
}

#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int g = 0;
	int t;

	while (s[g] != '\0')
	{
		g++;
	}
	for (t = g - 1; t >= 0; t--)
	{
		_putchar(s[g]);
	}
	_putchar('\n');
}

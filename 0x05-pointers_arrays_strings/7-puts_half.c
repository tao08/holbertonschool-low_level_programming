#include "holberton.h"

/**
 * puts_half - prints a string backwards
 * @str: string
 */



void puts_half(char *str)
{
	int g = 0;
	int t = 0;

	while (str[g] != '\0')
	{
		g++;
	}
	if (g % 2 == 0)
	{
		t = g / 2;
	}
	else
	{
		t = (g / 2) + 1;
	}
	while (g >  t)
	{
		_putchar(str[t]);
		t++;
	}
	_putchar('\n');
}

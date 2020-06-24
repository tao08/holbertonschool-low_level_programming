#include "holberton.h"

/**
 * puts2 - prints a string in reverse
 *
 * @str: string in reverse
 *
 * Return: void
 */
void puts2(char *str)
{
	int g = 0;
	int h;

	while (str[g] != '\0')
	{
		g++;
	}
	for (h = 0; h < g; h++)
	{
		if (h % 2 == 0)
		{
			_putchar(str[h]);
		}
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 *print_most_numbers  from 0 to 9, followed by a new line.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int g;

	fot(g = '0'; g <= '9'; g++)
	{
		if (g != '2' && g != '4')

			_putchar(g);
	}
	_putchar('\n');
}

#include "holberton.h"
/**
 *print_numbers - from 0 to 9, followed by a new line.
 * Return: result
 */
void print_numbers(void)
{
	int g;

	for (g = '0'; g <= '9'; g++)
		_putchar(g);
	_putchar('\n');
}

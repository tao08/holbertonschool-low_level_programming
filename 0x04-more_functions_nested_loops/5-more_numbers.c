#include "holberton.h"

/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0.
 */
void more_numbers(void)
{
	int g;
	int u;
	int s = 10;

	for (g = 0; u < 10; g++)
	{
		for (u = 0; u < 15; u++)
		{
			if (u > 9)
			{
				_putchar(1 + '0');
				s = 0;
			}
			_putchar('0' + ((u + s) % 10));
		}
		_putchar('\n');
	}
}

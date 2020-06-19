#include "holberton.h"
/**
 * print_square - that prints a square, followed by a new line.
 * @size: this is size_
 * Return: void
 */
void print_square(int size)
{
	int h;
	int x;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (x = 0; x < size; x++)

				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

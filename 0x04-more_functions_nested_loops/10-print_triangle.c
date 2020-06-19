#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: thi is a size
 * Return: void
 */

void print_triangle(int size)
{
	int a;
	int b;
	int g = size;

	if (size > 0)
		for (a = 0; a < size; a++)
		{
			g--;
			for (b = 0; b < size; b++)
			{

				if (b < g)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');

		}
	else
		_putchar('\n');

}

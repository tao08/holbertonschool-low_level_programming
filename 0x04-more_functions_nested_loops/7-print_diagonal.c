#include "holberton.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: num of time_
 * Return: void
 */
void print_diagonal(int n)
{
	int t;
	int o;

	if (n > 0)
	{
		for (t = 0; t < n; t++)
		{
			for (o = 0; o < t; o++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

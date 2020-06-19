#include "holberton.h"
/**
 *void print_line - function that draws a straight line in the terminal.
 * @n: num of time_
 * Return: void
 **/
void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}

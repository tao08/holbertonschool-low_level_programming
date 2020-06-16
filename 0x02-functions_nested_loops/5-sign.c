#include "holberton.h"

/**
 * print_sign - check the code for Holberton School students.
 * @n: integer to test.
 * Return: 0..
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

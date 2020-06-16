#include "holberton.h"

/**
*print_sing - check the code for Holberton School studentes.
*@n: integrar to test.
*Return: 0..
**/

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

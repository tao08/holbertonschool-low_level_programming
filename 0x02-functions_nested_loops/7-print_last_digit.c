#include "holberton.h"

/**
 *print_last_digit - function that prints the last digit of a number.
 *@n: the number check
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int rest = n % 10;

	if (rest < 0)
	{

	_putchar (-rest + '0');
	return (-rest);
}
	else
	{
		_putchar (rest + '0');
		return (rest);
	}
}

#include "holberton.h"
/**
 * _pow_recursion - Write a function that returns the value of x raised to.
 * @x: this is a int
 * @y: this is a int
 * Return: 1
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
		return (x * _pow_recursion(x, (y - 1)));
}

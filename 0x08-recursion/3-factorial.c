#include "holberton.h"
/**
 * factorial - Write a function that returns the factorial of a given number.
 * @n: this is a int
 *
 *
 **/
int factorial(int n)
{
	if  (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	return (n * factorial(n - 1));
}

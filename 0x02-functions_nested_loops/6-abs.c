#include "holberton.h"
/**
 *_abs - this function that computes the absolute value of an integer.
 *@n: the number to check
 *
 *Return: +n if n is positive if n < negative
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

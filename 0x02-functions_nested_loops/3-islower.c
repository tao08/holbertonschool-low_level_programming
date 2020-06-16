#include "holberton.h"

/**
 * _islower - checkers for lowercase char
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	int min = 97;
	int x = 122;

	if ((c >= min) && (c <= x))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

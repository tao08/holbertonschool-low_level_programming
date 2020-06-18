#include "holberton.h"
/**
 *_isupper - function that checks for uppercase character..
 *@c: variable  for  supper
 * Return: Always 0.
 */
int _isupper(int c)
{
	int min = 65;
	int w = 90;

	if ((c >= min) && (c <= w))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

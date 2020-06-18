#include "holberton.h"


/**
 *_isdigit -  found the digit  of 0 until 9
 *@c:  variable on digit 1.
 */
int _isdigit(int c)
{
	int x = 48;
	int z = 57;

	if ((c >= x) && (c <=z))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

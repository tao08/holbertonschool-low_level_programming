#include "holberton.h"
/**
 *  _strlen_recursion - Write a function that returns the length of a string.
 * @s: this is a punter
 * Return: *s
 *
 **/
int _strlen_recursion(char *s)
{
	if ( *s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return(*s);
}

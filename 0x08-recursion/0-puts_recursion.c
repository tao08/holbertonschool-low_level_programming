#include "holberton.h"
/**
 * _puts_recursion - this is a funtion.
 * @s: this is the  string
 *
 *
 **/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	if  (*s == '\0')
	{
		_putchar('\n');
	}
}

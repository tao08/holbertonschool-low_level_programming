#include "holberton.h"
/**
 * _puts_recursion - this is a funtion.
 * @s: this is the  string
 *
 *
 **/
void _puts_recursion(char *s)
{
	int g;

	for (g = 0; s[g] != '\0'; g++)
	{
		_putchar(s[g]);
		_puts_recursion (s);
	}
	_putchar('\n');
}

#include "holberton.h"
/**
 * _puts -  function that prints a string, followed by a new line, to stdout.
 * @str: this is pointer
 * Return: Always 0.
 **/
void _puts(char *str)
{
	int g;

	for (g = 0; str[g] != '\0'; g++)
	{
		_putchar(str[g]);
	}
	_putchar('\n');
}

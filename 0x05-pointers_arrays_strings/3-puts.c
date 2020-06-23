#include "holberton.h"
/**
* _puts - return the longitud
*
* @str: this is pointer
*
* Return: Always 0.
*/
void _puts(char *str)
{
	int g;

	g = 0;

	for (g = 0; str[g] != '\0'; g++)
	{
		_putchar(str[g]);
	}
	_putchart('\n');
}

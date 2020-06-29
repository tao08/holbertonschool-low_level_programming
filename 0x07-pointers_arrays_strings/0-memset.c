#include "holberton.h"
/**
 * _memset -  this funtion fills memory with a constant byte.
 * @s: this i a punter
 * @b: this is a constant
 * @n: number of byteee
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;


	while (n-- > 0)
		*p++ = b;
	return (s);
}

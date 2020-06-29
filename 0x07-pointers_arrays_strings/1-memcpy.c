#include "holberton.h"
/**
 * _memcpy - this funtion copies memori area.
 * @src: memory area
 * @dest: memmory area
 * @n: n bbytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *g = dest;
	char *x = src;

	while (n-- > 0)
		*g++ = *x++;
	return (dest);
}

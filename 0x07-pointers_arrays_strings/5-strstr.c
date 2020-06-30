#include "holberton.h"
/**
 * _strstr - Write a function that locates a substring.
 * @haystack: this is a string.
 * @needle: this is a  string
 * Return: 0
 **/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *g = haystack, *h = needle;

		while (*haystack && *needle && *haystack == *h)
		{
			haystack++;
			h++;
		}
		if (!*h)
			return (g);

		haystack = g + 1;
	}
	return ('\0');
}

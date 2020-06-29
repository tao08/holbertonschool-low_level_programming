#include "holberton.h"
/**
 * _strspn - this function gets the length of a prefix substring.
 * @s: is a punter or string
 * @accept: space bytes
 * Return: number bytes
 **/
unsigned int _strspn(char *s, char *accept)
{
	int g;
	int w;

	for (g = 0; s[g]; g++)
	{
		for (w = 0; accept[w]; w++)
		{
			if (accept[w] == s[g])
				break;
		}
		if (!accept[w])
			break;
	}
	return (g);
}

#include "holberton.h"

/**
 * *rot13 - check the code for Holberton School students.
 * @g: its a pointer
 * Return: Always 0.
 */

char *rot13(char *g)
{
	int w;
	int s;
	char z[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (w = 0; g[w] != '\0'; w++)
	{
		for (s = 0; s < 52; s++)
		{
			if (g[w] == z[s])
			{
				g[w] = b[s];
				break;
			}
		}
	}
	return (g);
}

#include "holberton.h"

/**
 * *leet - check the code for Holberton School students.
 * @g: its a pointer
 * Return: Always 0.
 */

char *leet(char *g)
{
	int h;
	int s;
	char z[10] = {'A', 'a', 'E', 'e', 'L', 'l', 'O', 'o', 'T', 't'};
	char b[5] = {'4', '3', '1', '0', '7'};
	int re;

	for (h = 0; g[h] != '\0'; h++)
	{
		for (s = 0; s < 10; s++)
		{
			if (g[h] == z[s])
			{
				re = s / 2;
				g[h] = b[re];
			}
		}
	}
	return (g);
}

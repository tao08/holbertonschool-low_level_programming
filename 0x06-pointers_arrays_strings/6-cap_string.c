#include "holberton.h"
/**
 * cap_string - capitalizes al the world
 * @g: pointer..
 * Return: string pointer
 *
 */
char *cap_string(char *g)
{
	int x;

	x = 0;

	while (g[x] != '\0')
	{
		if (g[0] >= 97 && g[0] <= 122)
		{
			g[0] -= 32;
		}
		if (g[x] >= 97 && g[x] <= 122 && (g[x - 1] == ',' || g[x - 1] ==
						  ';' || g[x - 1] == '.' ||
						  g[x - 1] == '!' || g[x - 1]
						  == '?' || g[x - 1] == '"' ||
						  g[x - 1] == '\n' || g[x - 1]
						  == '(' || g[x - 1] == ')'
						  || g[x - 1] == '{' || g[x - 1]
						  == '}' || g[x - 1] == ' ' ||
						  g[x - 1] == 32 || g[x - 1]
						  == '\t'))
		{
			g[x] -= 32;
		}
		x++;

	}
	return (g);
}

#include "holberton.h"
/**
 * cap_string - capitalizes al the world
 * @s: pointer..
 * Return: string pointer
 *
 */
char *cap_string(char *s)
{
	int g, w;

	char exept[13] = {' ', '\t', '\n', ',', ';', '.', '!',
			  '?', '"', '(', ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	for (g = 1; s[g] != '\0'; g++)
		for (w = 0; exept[w] != '\0'; w++)
			if (s[g + 1] == exept[w] && s[g + 1] >= 'a' &&  s[g + 1]
			    <= 'z')
				s[g + 1] = s[g + 1] - 32;
	return (s);
}

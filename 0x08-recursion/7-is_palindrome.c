#include  "holberton.h"
/**
 * strin - check a string is a palindrome
 * @s: this is a variable
 * @g: this is a variable
 * @w: this is a variable
 * Return: 0
 **/
int strin(char *s, int g, int w)
{
	if (g >= w)
		return (1);

	if (s[g] == s[w])
		return (strin(s, g + 1, w - 1));
	else
		return (0);
}

/**
 * _strlen_recursion - this function returns the length of a string.
 * @s: string
 * Return: 0
 **/
int _strlen_recursion(char *s)
{
	if (*s != 0)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);

}
/**
 * is_palindrome - this is a funtion for palindrome
 * @s: this is a punter
 * Return: 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	if ((strin(s, 0, len)) == 1)
		return (1);
	else
		return (0);

	return (0);
}

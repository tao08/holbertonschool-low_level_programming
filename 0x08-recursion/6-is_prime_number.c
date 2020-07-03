#include "holberton.h"
/**
 * primo - this is a funtion
 * @n: this is a variable
 * @w: this is a variable
 * Return: primo
 **/
int primo(int n, int w)
{
	if (n == w)
	{
		return (1);
	}
	if (n % w == 0)
	{
		return (0);
	}
	if (n == 1 || n < 0)
	{
		return (0);
	}
	return (primo(n, w + 1));
}
/**
 * is_prime_number - this is a funtion numer two
 * @n: this is a variable
 * Return: primo
 *
 *
 **/
int is_prime_number(int n)
{
	return (primo(n, 2));
}

#include "holberton.h"
/**
 * _cuadrada - this is a funtion for the recurtion
 * @g: this is a variable
 * @w: this is a variable
 * Return: -1
 */
int _cuadrada(int g, int w)
{
	int raiz;

	if (w * w < g)
	{
		raiz = _cuadrada(g, w + 1);
		return (raiz);
	}
	if (w * w == g)
	{
		return (w);
	}
	return (-1);
}
/**
 * _sqrt_recursion - this is a recursion
 * @n: this is a variable
 * Return: _cuadrada
 **/
int _sqrt_recursion(int n)
{
	return (_cuadrada(n, 1));
}

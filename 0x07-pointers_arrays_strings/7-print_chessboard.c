#include "holberton.h"
/**
 *print_chessboard - this function prints the chessboard.
 *@a: array.
 */
void print_chessboard(char (*a)[8])
{
	int g;
	int j;

	for (g = 0; g < 8; g++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[g][j]);
		_putchar('\n');
	}
}

#include "holberton.h"
/**
 *times_table - print the 9 time table
 *
 *Return: void
 */
void times_table(void)
{
	int columna, fila, nfila, multi, ncol;

	columna = 0;

	while (columna <= 9)
	{
		for (fila = 0; fila <= 9; fila++)
		{
			multi = columna * fila;
			ncol = multi / 10;
			nfila = multi % 10;

			if (multi > 9)
			{
				_putchar(ncol + '0');
				_putchar(nfila + '0');
			}
			else
			{
				if (fila >= 1)
				{
					_putchar(' ');
					_putchar(nfila + '0');
				}
				else
				{
					_putchar(nfila + '0');
				}
			}
			if (fila != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		columna++;
		_putchar('\n');
	}
}

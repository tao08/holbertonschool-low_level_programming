#include "holberton.h"

/**
 * jack_bauer -prnts every minute of the day
 *
 * Return: none
 *
 */

void jack_bauer(void)
{
	int a;
	int b;
	int j;
	int k;
	int t = 9;

	for (a = 0; a <= 2; a++)
	{
		if (a == 2)
			t = 3;

		for (b = 0; b <= t; b++)
		{
			for (j = 0; j <= 5; j++)
			{
				for (k = 0; k <= 9; k++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(k + '0');
					_putchar('\n');
				}
			}
		}
	}
}

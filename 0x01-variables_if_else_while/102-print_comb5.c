#include <stdio.h>
/**
 * main - Printing combinations 5
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int g;
	int u;
	int s;
	int e;

	for (g = '0'; g <= '9'; g++)
	{
		for (u = '0'; u <= '9'; u++)
		{
			for (s = g; s <= '9'; s++)
			{
				for (e = u + '1'; e <= 57; e++)
				{
					putchar(g);
					putchar(u);
					putchar(' ');
					putchar(s);
					putchar(e);
					if (g != '9' || u != '8' || s != '9' || e != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

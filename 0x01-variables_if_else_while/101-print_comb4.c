#include <stdio.h>
/**
 * main - Combinations 4
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int g;
	int u;
	int s;

	for (g = '0'; g <= '9'; g++)
	{
		for (u = g + 1; u <= '9'; u++)
		{
			for (s = u + 1; s <= '9'; s++)
			{
				putchar(g);
				putchar(u);
				putchar(s);
				if (g != '7' || u != '8' || s != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

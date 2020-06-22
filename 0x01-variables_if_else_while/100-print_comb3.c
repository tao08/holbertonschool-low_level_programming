#include <stdio.h>
/**
 * main - Combinations
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int k;
	int u;

	for (k = '0'; k <= '9'; k++)
	{
		for (u = k + 1; u <= '9'; u++)
		{
			putchar(k);
			putchar(u);
			if (k != '8' || u != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

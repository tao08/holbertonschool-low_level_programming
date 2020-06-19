#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	int g;

	for (g = 1; a < 101; g++)
	{
		if (g % 3 == 0)
			printf("Fizz");
		if (g % 5 == 0)
			printf("Buzz");
		if (g % 3 != 0 && g % 5 != 0)
			printf("%d", g);
		if (g != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

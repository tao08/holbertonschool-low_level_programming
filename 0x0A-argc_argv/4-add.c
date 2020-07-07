#include "holberton.h"
/**
 * main - this is a funtion for argc and argv
 * @argc: this is a variable
 * @argv: this is a variable
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int g, w;
	int suma;

	suma = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (g = 1; g < argc; g++)
	{
		for (w = 0; argv[g][w] != '\0'; w++)
		{
			if (isdigit(argv[g][w]) == 0)
			{
					printf("Error\n");
					return (1);
			}
		}
		suma = suma + atoi(argv[g]);
	}
	printf("%d\n", suma);
	return (0);

}

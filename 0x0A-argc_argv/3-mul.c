#include <stdlib.h>
#include <stdio.h>
/**
 * main - this is a function
 * @agc: es una variable
 * @argv: es una variable
 * Return: 1
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("erro\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
		return (0);
}

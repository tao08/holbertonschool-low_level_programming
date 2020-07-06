#include <stdio.h>
/**
 * main - this is a funtion
 * @argc: es un contador de cantidad argumento
 * @argv: es un contrador de valor de argumentos
 * Return: 0
 **/
int main(int argc, __attribute__((unused)) char *argv[])
{
	int g;

	for (g = 0; g < argc; g++)
	{
		printf("%s\n", argv[g]);
	}
	return (0);
}

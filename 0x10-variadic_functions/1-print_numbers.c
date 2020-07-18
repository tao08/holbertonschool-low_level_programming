#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @n: numbers of arguments this is a variable
 * @separator: the separator this is a variable
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter = 0;

	va_list numbers;


	va_start(numbers, n);


	if (separator == NULL)
	{
		separator = "";
	}

	for (counter = 0; counter < n; counter++)
	{
		if (counter != n - 1)
		{
			printf("%d%s", va_arg(numbers, int), separator);
		}
		else
		{
			printf("%d", va_arg(numbers, int));
		}


	}
	printf("\n");
	va_end(numbers);
}

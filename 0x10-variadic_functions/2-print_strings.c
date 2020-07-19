#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print string with separator to funtion
 * @n: number
 * @separator: String passed to prototype punter
 * Return: the sum of the integers, result sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p_strings;
	unsigned int g;
	char *c;

	va_start(p_strings, n);

	for (g = 0; g < n; g++)
	{
		c = (va_arg(p_strings, char *));
		if (c)
			printf("%s", c);
		if (!c)
			printf("(nil)");
		if (g != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p_strings);
}

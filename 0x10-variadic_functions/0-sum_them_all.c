#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - funtion for the va list
 * @n: this is a variable
 * Return: result
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int result = 0;
	unsigned int i;

	va_start(valist, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		result += va_arg(valist, int);
	}
	va_end(valist);
	return (result);


}

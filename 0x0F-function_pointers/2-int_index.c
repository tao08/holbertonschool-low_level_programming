#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - this is a function
 * @array: this is a punter
 * @size: this is a punter
 * @cmp: this is a puntero
 * Return: -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int g, aux = 0;

	if (array && cmp && size >= 0)
	{
		for (g = 0; g < size; g++)
		{
			aux = cmp(array[g]);
			if (aux)
				return (g);
		}

	}
	return (-1);
}

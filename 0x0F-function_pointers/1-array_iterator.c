#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - this is  a funtion
 * @array: this is a punter
 * @size: this is a  punter
 * @action: this is a punter
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t  x;

	if (action && array)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}

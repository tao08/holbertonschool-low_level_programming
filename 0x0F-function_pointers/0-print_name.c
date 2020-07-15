#include "function_pointers.h"
#include <stdio.h>
#include <stdio.h>
/**
 * print_name - this is a function fron puntero
 * @name: this is  a punter
 * @f: this is a  punter
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != '\0' && f != '\0')
		f(name);
}

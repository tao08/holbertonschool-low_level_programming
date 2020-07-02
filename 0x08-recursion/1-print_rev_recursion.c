#include "holberton.h"
/**
 * _print_rev_recursion - Write a function that prints a string in reverse.
 * @s: this is a string
 *
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /** llamo la direccion del string y lo igualo con el
			 *null para  para empezardesde el final
			 **/
		return;
			_print_rev_recursion(++s); /** sumo el caracter y luego
						    *llegamos a la string para
						    *se imprima de reves.
						    **/
			_putchar(*--s);

}

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

int main(int argc, chart **argv)
{

if ( argc != 4)
printf("Error\n");
exit(98);

if (((argv[2]  == '/' || argv[2] '%') && atoi(argv[3]) == 0 ))
	printf ("Error\n");
exit(100);
printf ("%d\n", (get_op_func)argv[2](atoi(argv[1]), atoi(argv[3])))
return (0);
}

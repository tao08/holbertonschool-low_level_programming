#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ifprintf("%d is negative\n", n)
	if (n == 0)
	printf("%d is zero\n", n);
	if (n < 0)
       printf("%d is negatavive\n", n);
	return (0);
}

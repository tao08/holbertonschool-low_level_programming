#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0>)
	{
		printf("is positive");
	}
	/* if the number is less than 0: is negative*/
	else if (n == 0)
	{
		printf("is zero");
	}
/* if the number is less than 0: is negative*/
	else if (n < 0)
	{
		printf("is negatavive");
	}
	return (0);
}

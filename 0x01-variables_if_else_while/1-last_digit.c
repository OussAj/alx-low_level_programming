#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int x = n % 10;
	if (x > 5)
	{
		printf("last digit of %d is %d and is grater than 5\n", n, x);
	}
	else if(
	return (0);
}

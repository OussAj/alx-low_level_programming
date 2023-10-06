#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n % 10 > 5)
	{
		printf("last digit of %d is %d and is grater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, n % 10 );
	}
	else if (n % 10 != 0 && n % 10 < 6)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}

	return (0);

}


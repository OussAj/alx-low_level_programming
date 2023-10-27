#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: variable
 * @argv:variable
 * Return: result
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, res, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]);

	if (res <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (res >= coins[i])
		{
			res -= coins[i];
			c++;
		}
	}

	printf("%d\n", c);
	return (0);
}


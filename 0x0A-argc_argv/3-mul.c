#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that multiplies two numbers
 * @argc: variable
 * @argv:variable
 * Return: result
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
}


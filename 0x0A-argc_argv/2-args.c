#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints all arguments it receives
 * @argc: variable
 * @argv:variable
 * Return: result
 */
int main(int argc, char *argv[])
{
	int c = 0;

	for (; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}


#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all the aguments it recieves.
 *
 * @argc: a variable.
 * @argv: a variable.
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	for (; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}


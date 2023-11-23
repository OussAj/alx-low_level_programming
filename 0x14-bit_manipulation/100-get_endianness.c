#include "main.h"

/**
* get_endianness - check the endianness
*
* Return: 0
*/

int get_endianness(void)
{
	unsigned int count = 1;

	char *c = (char *) &count;

	return (*c);
}

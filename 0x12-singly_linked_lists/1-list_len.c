#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
* list_len - a function that count the length of a list.
* @h: the list to be perated.
*
* Return: the length of list.
*/

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}

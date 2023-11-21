#include "lists.h"

/**
* listint_len - a function that counts elements in a linked list.
* @h: the list to be operated.
*
* Return: number of elements of the list.
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

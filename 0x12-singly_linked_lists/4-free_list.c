#include "lists.h"

/**
* free_list - a function that frees a list_t list.
* @head: a ponter to the head of the list.
*/

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}

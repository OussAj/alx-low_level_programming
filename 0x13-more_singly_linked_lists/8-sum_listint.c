#include "lists.h"

/**
* sum_listint - a function that sum of all the data (n) of a linked list.
* @head: a pointer to the head of the list.
*
* Return: returns the result.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}

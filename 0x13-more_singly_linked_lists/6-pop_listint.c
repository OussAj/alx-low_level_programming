#include "lists.h"

/**
* pop_listint - a function that deletes the head node of a linked list.
* @head: a pointer to the head of the list.
*
* Return: the head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	i = temp->n;
	(*head) = (*head)->next;
	free(temp);
	return (i);
}

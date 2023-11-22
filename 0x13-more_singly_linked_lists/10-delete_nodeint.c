#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index of a linked list.
* @head: pointer to the head of the list.
* @index: the index.
*
* Return: 1 if it succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *ptr, *temp;

	if (!(*head))
	{
		return (-1);
	}
	ptr = *head;

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (i < index - 1)
	{
		if (!ptr || !(ptr->next))
		{
			return (-1);
		}
		i++;
		ptr = ptr->next;
	}
	temp = ptr->next;
	ptr->next = ptr->next->next;
	free(temp);
	return (1);
}

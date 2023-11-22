#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: a pointer to the head of the list.
* @idx: the index.
* @n: the value of n.
*
* Return: the address of the new node or NULL.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *new, *temp;

	if (!head)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;

	while (i < idx - 1)
	{
		if (!temp)
		{
			free(new);
			return (NULL);
		}
		i++;
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}

#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list.
* @head: a pointer to the head of the list.
* @str: the input string of the node.
*
* Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *new;

	if (!str)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;

	return (new);
}

#include "lists.h"

/**
* add_node - a function that adds a new node at the beginning of a list.
* @head: a pointer to the head of the list.
* @str: parameter.
*
* Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	if (!head || !str)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}
	new->len = strlen(str);
	new->str = strdup(str);
    if (!new->str)
    {
        free(new);
        return (NULL);
    }
	new->next = *head;
	*head = new;
	return (str);
}

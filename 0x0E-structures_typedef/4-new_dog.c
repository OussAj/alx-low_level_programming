#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
char *_strdup(char *s);
/**
 * *new_dog - function that creates a new dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: result
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = (dog_t *) malloc(sizeof(dog_t));

	if (!new)
	{
		return (NULL);
	}
	(*new).name = _strdup(name);

	if (!(*new).name)
	{
		free(new);
		return (NULL);
	}
	(*new).age = age;
	(*new).owner = _strdup(owner);

	if (!(*new).owner)
	{
		free((*new).name);
		free(new);
		return (NULL);
	}
	return (new);
}
/**
 * *_strdup - function that duplicates a string
 * @s: paremeter
 * Return: result
 */
char *_strdup(char *s)
{
	size_t len = strlen(s) + 1;
	char *copy = malloc(len);

	if (!copy)
	{
		return (NULL);
	}
	memcpy(copy, s, len);
	return (copy);
}


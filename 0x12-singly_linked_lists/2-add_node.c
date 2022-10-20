#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to return
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}


/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: struct list_s
 * @str: string
 *
 * Return: struct list_s pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	i = strlen(str);

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}

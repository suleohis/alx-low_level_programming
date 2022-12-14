#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at
 * the end of a listint_t list.
 * @head: pointer to pointer struct head
 * @n: const int n
 *
 * Return: struct listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}

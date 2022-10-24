#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head:  struct listint_t
 *
 * Return: struct listint_t
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;

		(*head)->next = prev;

		prev = *head;

		*head = next;
	}

	*head = prev;

	return (*head);
}

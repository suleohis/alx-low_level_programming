#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer to pointer struct listint_t
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (head == NULL)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}

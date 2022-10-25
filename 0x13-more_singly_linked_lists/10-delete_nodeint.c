#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * @head: struct listint_t
 * @index: unsigned int
 *
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *new = NULL;
	unsigned int i = 0;

	if (*head == NULL|| head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (i);
	}

	if (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	new = temp->next;
	temp->next = new->next;
	free(new);

	return (1);
}

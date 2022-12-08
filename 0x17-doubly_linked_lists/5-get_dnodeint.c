#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list.
 * @head: dlistint_t
 * @index: int
 * Return:  the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (head)
	{
		if (i == index)
			return (head);
		temp = head->next;
		head = temp;
		i++;
	}

	return (NULL);
}

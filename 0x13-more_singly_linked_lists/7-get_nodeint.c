#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: struct listint_t
 * @index: unsigned int
 *
 * Return: struct listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp != NULL)
		return (temp);
	return (NULL);
}

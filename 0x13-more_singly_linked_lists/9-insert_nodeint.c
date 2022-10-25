#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position.
 * @head: pointer to pointer struct listint_t
 * @idx: index
 * @n: value
 *
 * Return: struct listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp && i < idx - 1)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
		i++;
	}

	return (NULL);

}

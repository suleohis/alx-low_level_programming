#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer to pointer struct listint_t
 *
 * Return: size_t
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	long int num;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		num = *h - (*h)->next;
		if (num <= 0)
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
		i++;
	}

	*h = NULL;

	return (i);
}

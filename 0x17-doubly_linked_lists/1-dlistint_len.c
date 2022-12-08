#include "lists.h"

/**
 * dlistint_len - a function that printsi
 * all the elements of a dlistint_t list.
 * @h: struct dlistint_s
 * Return: size_t
 */


size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *new;
	int i = 0;

	while (h)
	{
		new = h->next;
		h = new;
		i++;
	}
	return (i);

}

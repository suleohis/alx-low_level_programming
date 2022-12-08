#include "lists.h"

/**
 * print_dlistint - a function that printsi
 * all the elements of a dlistint_t list.
 * @h: struct dlistint_s
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *new;
	int i = 0;

	while (h)
	{
		new = h->next;
		printf("%d\n", h->n);
		h = new;
		i++;
	}
	return (i);
}

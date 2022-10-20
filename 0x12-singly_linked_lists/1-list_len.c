#include "lists.h"

/**
 * list_len - function that prints all the elements of a list_t list.
 * @h: struct list_s
 *
 * Return: the size_t of the function
 */

size_t list_len(const list_t *h)
{
		int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

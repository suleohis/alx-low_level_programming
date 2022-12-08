#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: dlistint_t
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	dlistint_t *temp = head;

	while (head)
	{
		sum += head->n;
		temp = head->next;
		head = temp;
	}

	return (sum);
}

#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: listint_t
 * Return: size_t
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	long int num;

	while (head)
	{
		num = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (num > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (i);
}

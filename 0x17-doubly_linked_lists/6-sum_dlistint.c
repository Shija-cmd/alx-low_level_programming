#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a list.
 * @head: Points to the list.
 * Return: Sum of all data in the list or 0 if the lost is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}

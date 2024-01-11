#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a linked list.
 * @h: Points to the list.
 * Return: Number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}

	return (cont);
}

#include "lists.h"

/**
 * print_dlistint - Prints all elements of a list.
 * @h: Pointer to the list.
 * Return: Number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%d\n", node->n);
		cont++;
		node = node->next;
	}

	return (cont);
}

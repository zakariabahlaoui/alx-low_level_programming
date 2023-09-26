#include "lists.h"

/**
 * print_listint - print all rlemment in list
 * @h: head of a list
 *
 * Return: return nuber of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_node;

	while (h)
	{
		printf("%d\n", h->n);
		n_node++;
		h = h->next;
	}

	return (n_node);
}

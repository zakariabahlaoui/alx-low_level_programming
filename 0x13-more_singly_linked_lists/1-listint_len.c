#include "lists.h"

/**
 * listint_len - return the number of element the link_list
 * @h: thr head of link_list
 *
 * Return: return the number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t n_node;

	n_node = 0;

	while (h)
	{
		h = h->next;
		n_node++;
	}

	return (n_node);
}

#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *curr;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	curr = *head;

	n = curr->n;

	temp = curr->next;

	free(curr);

	*head = temp;

	return (n);
}

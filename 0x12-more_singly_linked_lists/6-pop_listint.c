#include "lists.h"
/**
 * pop_listint - delete the first node
 * @head: the first node
 * Return: the head node
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *next_z;

	if (!head)
		return (0);
	if (*head == NULL)
		return (0);
	next_z = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = next_z;
	return (i);
}

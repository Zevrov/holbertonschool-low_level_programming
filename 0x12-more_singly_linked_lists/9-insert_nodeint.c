#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a specific index
 * @head: head address
 * @idx: the index
 * @n: the input
 * Return: deref of head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *z_head;
	listint_t *newnode;
	unsigned int count = 1;

	if (!head)
		return (NULL);
	z_head = *head;
	while (count < idx)
	{
		z_head = z_head->next;
		if (!z_head)
			return (NULL);
		count++;
	}
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = z_head;
		*head = newnode;
		return (*head);
	}
	else
	{
		newnode->next = z_head->next;
		z_head->next = newnode;
	}
	return (newnode);
}


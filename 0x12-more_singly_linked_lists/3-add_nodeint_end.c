#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the end of a list
 * @head: where the head is
 * @n: the input for the new node
 * Return: deref of new head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *endnode;

	if (!head)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	endnode = *head;
	if (endnode != NULL)
	{
		while (endnode->next != NULL)
			endnode = endnode->next;
		endnode->next = newnode;
	}
	else
		*head = newnode;
	return (*head);
}

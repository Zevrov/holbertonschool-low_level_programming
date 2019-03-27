#include "lists.h"
/**
 * add_nodeint - add a new node
 * @head: the head address
 * @n: the input for the new node
 * Return: dereference
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (!head)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}

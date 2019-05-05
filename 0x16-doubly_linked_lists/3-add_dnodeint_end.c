#include "lists.h"
/**
* add_dnodeint_end - adds an element to the end of the list
* @head: pointer to the pointer of the head
* @n: const int n
* Return: the address of the new element, NULL if failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if (!*head)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
			end->next = new;
			new->prev = end;
	}
	return (new);
}

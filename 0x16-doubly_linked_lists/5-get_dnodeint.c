#include "lists.h"
/**
* get_dnodeint_at_index - gives the node at "index"
* @head: the head of the list
* @index: where the node you want is
* Return: returns the node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	if (!head)
		return (NULL);
	temp = head;
	while (index > 0 && temp)
	{
		index--;
		temp = temp->next;
		if (!temp)
			return (NULL);
	}
	return (temp);
}

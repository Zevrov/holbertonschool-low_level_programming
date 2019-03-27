#include "lists.h"
/**
 * get_nodeint_at_index - get to a specific node
 * @head: the head address
 * @index: where you want to be
 * Return: the value of the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z = 0;
	listint_t *y;

	if (!head)
		return (NULL);
	y = head;
	while (z < index)
	{
		if (!y->next)
			return (NULL);
		y = y->next;
		z++;
	}
	return (y);
}

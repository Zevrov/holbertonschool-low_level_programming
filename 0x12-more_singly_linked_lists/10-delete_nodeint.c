#include "lists.h"
/**
 * delete_nodeint_at_index - remove node at index
 * @head: input head
 * @index: the index
 * Return: -1 on fail, 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *z_head;
	listint_t *temp;
	unsigned int count = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	count = 1;
	z_head = *head;
	while (count < index)
	{
		if (!z_head)
			return (-1);
		z_head = z_head->next;
		count++;
	}
	temp = z_head->next;
	z_head->next = temp->next;
	free(temp);
	return (1);
}

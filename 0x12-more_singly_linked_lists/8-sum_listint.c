#include "lists.h"
/**
 * sum_listint - sum the list
 * @head: list input
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}

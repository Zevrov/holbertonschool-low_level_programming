#include "lists.h"
/**
 * listint_len - prints all numbers
 * @h: the linked list of numbers
 * Return: the amount in list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *list = h;
	int count = 0;

	if (!h)
		return (0);
	while (list != NULL)
	{
		list = list->next;
		count++;
	}
	return (count);
}

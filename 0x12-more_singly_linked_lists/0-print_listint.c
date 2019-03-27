#include "lists.h"
/**
 * print_listint - prints the list
 * @h:input for list
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *list = h;
	int count = 0;

	if (!h)
		return (0);
	while (list != NULL)
	{
		printf("%d\n", list->n);
		list = list->next;
		count++;
	}
	return (count);
}

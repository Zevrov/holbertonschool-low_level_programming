#include "lists.h"
/**
* print_dlistint - print out a linked list
* @h: head node of the list
* Return: the num of elements
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t stuff = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		stuff++;
	}
	return (stuff);
}

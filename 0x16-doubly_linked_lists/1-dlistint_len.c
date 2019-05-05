#include "lists.h"
/**
* dlistint_len - returns the num of elements
* @h: head node of the list
* Return: the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t stuff = 0;

	while (h != NULL)
	{
		h = h->next;
		stuff++;
	}
	return (stuff);
}

#include "lists.h"
/**
 * list_len - counts the length of the list
 * @h: the list
 * Return: the # of slots
 */
size_t list_len(const list_t *h)
{
	const list_t *z_list = h;
	int count = 0;

	if (h == NULL)
		return (0);
	while (z_list != NULL)
	{
		z_list = z_list->next;
		count++;
	}
	return (count);
}

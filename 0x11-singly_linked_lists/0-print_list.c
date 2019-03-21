#include "lists.h"
/**
 * print_list - print the items
 * @h: the linked list
 * Return: 0 or count
 */
size_t print_list(const list_t *h)
{
	const list_t *z_list = h;
	int count = 0;

	if (h == NULL)
		return (0);
	while (z_list != NULL)
	{
		if (z_list->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", z_list->len, z_list->str);
		z_list = z_list->next;
		count++;
	}
	return (count);
}

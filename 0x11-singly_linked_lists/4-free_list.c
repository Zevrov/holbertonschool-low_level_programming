#include "lists.h"
/**
 * free_list - frees the whole list
 * @head: where the head is
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}

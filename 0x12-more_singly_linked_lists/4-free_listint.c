#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: input linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

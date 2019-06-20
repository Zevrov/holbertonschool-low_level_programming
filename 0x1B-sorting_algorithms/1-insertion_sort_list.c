#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - sort doubly linked list via insertion sort
 * @list: double pointer to a doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *here, *temp, *temp_n;
	int check = 0;

	if ((*list)->next == NULL || !list || *list == NULL)
		return;
	here = (*list)->next;
	while (here != NULL)
	{
		temp = here;
		while (temp->prev != NULL)
		{
			check = 0;
			if (temp->n < temp->prev->n)
			{
				if (temp->prev->prev != NULL)
					temp->prev->prev->next = temp;
				temp->prev->next = temp->next;
				temp_n = temp->prev->prev;
				temp->prev->prev = temp;
				if (temp->next != NULL)
					temp->next->prev = temp->prev;
				temp->next = temp->prev;
				temp->prev = temp_n;
				check = 1;
				if (temp->prev == NULL)
					*list = temp;
				print_list(*list);
			}
			if (check == 0)
				temp = temp->prev;
		}
		here = here->next;
	}
}

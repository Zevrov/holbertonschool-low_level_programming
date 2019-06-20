#include "sort.h"
#include <stdio.h>

/**
 * swapi - swaps node to the last node
 * @node: the node being swapped
 */
void swapi(listint_t *node)
{
	listint_t *x, *y, *next;

	if (node->prev == NULL)
		return;
	x = (*node).prev;
	y = (*x).prev;
	next = (*node).next;
	if (y != NULL)
		(*y).next = node;
	(*node).prev = y;
	(*node).next = x;
	(*x).prev = node;
	(*x).next = next;
	if (next != NULL)
		(*next).prev = x;
}

/**
 * insertion_sort_list - sort doubly linked list via insertion sort
 * @list: double pointer to a doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *current;

	if (!list || !*list)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		if ((*current).prev->n > (*current).n)
		{
			temp = (*current).next;
			while ((*current).prev != NULL)
			{
				if ((*current).n < (*current).prev->n)
				{
					swapi(current);
					while ((*list)->prev != NULL)
						(*list) = (*list)->prev;
					print_list(*list);
				}
				else
					break;
			}
			current = temp;
		}
		else
			current = (*current).next;
	}
}

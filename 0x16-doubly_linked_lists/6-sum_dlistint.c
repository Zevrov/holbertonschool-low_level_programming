#include "lists.h"
/**
* sum_dlistint - give the total amount of nodes
* @head: pointer to the first node
* Return: the amount of nodes
*/
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}

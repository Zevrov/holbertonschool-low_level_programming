#include "lists.h"
/**
 * add_node_end - adds a node at the end
 * @head: head address
 * @str: the element
 * Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	int count = 0;

	if (!head || !str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	while (str[count] != '\0')
		count++;
	new->len = count;
	new->next = NULL;
	temp = *head;
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	else
		*head = new;
	return (*head);
}

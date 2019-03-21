#include "lists.h"
/**
 * add_node - adds a new slot to the list
 * @head: where the slot goes
 * @str: the input
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;
	return (*head);
}

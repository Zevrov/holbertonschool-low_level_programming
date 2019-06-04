#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table being printed
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	int delim = 98;
	unsigned long int index;

	if (ht == NULL || (*ht).array == NULL)
	{
		return;
	}
	printf("{");
	for (index = 0; (*ht).size > index; index++)
	{
		temp = (*ht).array[index];
		while (temp != NULL)
		{
			if (delim == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", (*temp).key, (*temp).value);
			temp = (*temp).next;
			delim = 1;
		}
	}
	printf("}\n");
}

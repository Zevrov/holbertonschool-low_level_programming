#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_delete - delete yo hashes
 * @ht: hash table for deletion
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *holder, *next;
	unsigned long int index = 0;

	holder = (*ht).array[index];
	if (holder == NULL)
	{
		return;
	}
	for (; (*ht).size > index; index++)
	{
		for (; holder != NULL; holder = next)
		{
			next = (*holder).next;
			free(holder);
		}
	}
	free(ht);
}

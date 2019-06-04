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

	if ((*ht).size == 0 || !(*ht).array || !ht)
		return;
	for (; (*ht).size > index; index++)
	{
		if ((*ht).array[index] != NULL)
		{
			for (holder = (*ht).array[index]; holder != NULL; holder = next)
			{
				next = (*holder).next;
				free((*holder).key);
				free((*holder).value);
				free(holder);
			}
		}
	}
	free((*ht).array);
	free(ht);
}

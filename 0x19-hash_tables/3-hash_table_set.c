#include "hash_tables.h"
/**
* hash_table_set - sets a hash table
* @ht: the hash table
* @key: the key
* @value: the value
* Return: the index where the key/value is located in the table
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}

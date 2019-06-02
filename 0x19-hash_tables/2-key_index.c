#include "hash_tables.h"
/**
* key_index - sets a hash table
* @key: the key
* @size: the value for size
* Return: where the key/value is stored in the array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}

#include "hash_tables.h"

/**
 * hash_tables_create - creates hash tables
 * @size: size of array in hash table
 * return: Null if error or pointer to table if successful
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return(NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}

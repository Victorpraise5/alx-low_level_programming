#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated with key
 * @ht: hash table
 * @key: key string of key/value pair
 * Return: if not found NULL, else return value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	tmp = ht->array[index];
	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	if (tmp)
	return (tmp->value);
	else
	return (NULL);
}

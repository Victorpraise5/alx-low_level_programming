#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: table to be printed
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");

			tmp = ht->array[i];
			while (tmp != NULL)
			{
				printf("'%s' : '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}

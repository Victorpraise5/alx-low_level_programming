#include "hash_tables.h"
/**
 * hash_djb2 - a hash function on the djb2 algorithm
 * @str: The string key
 * Return: Hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int has;
	int c;

	hash= 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}

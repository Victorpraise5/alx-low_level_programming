#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 *              if str is NULL, print [0] (nil)
 * @h: linked list of type list_t
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
        
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count += 1;
	}
	return (count);
}

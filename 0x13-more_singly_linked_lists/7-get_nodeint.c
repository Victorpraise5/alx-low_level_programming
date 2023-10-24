#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @head: beginning of linked list
 * @index: position of node to return
 *
 * Return: node at index on linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}

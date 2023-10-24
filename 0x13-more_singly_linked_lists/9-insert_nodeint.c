#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to beginning of linked list
 * @idx: index of list where new node is to be inserted, starts at 0
 * @n: data to be stored at new node
 * Return: address of new node, NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new;
	unsigned int counter = 0;

	if (temp == NULL && idx != 0)
		return (NULL);

	while (temp && counter < idx - 1)
	{
		temp = temp->next;
		counter++;
	}
	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		if (counter + 1 == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
	}
	return (NULL);
}

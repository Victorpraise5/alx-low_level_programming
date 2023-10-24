#include "lists.h"

/**
 * delete_nodeint_at_index - deleted node at index of linked list
 * @head: pointer to beginning of linked list
 * @index: position of node in linked list, starts at 0
 *
 * Return: 1 if successful, -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *next;
	unsigned int counter = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp && counter < index - 1)
	{
		temp = temp->next;
		counter++;
		if (temp == NULL || temp->next == NULL)
			return (-1);
	}

	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}

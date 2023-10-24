#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: beginning of linked list
 * @n: element in linked list node
 *
 * Return: address of new element, NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *prev, *temp = NULL;

	if (head == NULL)
		return (NULL);

	prev = malloc(sizeof(listint_t));

	if (prev == NULL)
		return (NULL);

	prev->n = n;
	prev->next = NULL;

	if (*head == NULL)
	{
		*head = prev;
		return (prev);
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = prev;
	}
	return (prev);
}

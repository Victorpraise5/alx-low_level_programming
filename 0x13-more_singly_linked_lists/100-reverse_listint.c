#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer to beginning node
 *
 * Return: pointer to head of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *prev = NULL;

	if ((*head) == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	while ((*head) != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = temp;
	}
	*head = prev;
	return (*head);
}

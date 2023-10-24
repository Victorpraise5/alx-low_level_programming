#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to linked list
 *
 * Return: data(n) of head node
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (n);
}

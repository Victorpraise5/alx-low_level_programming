#include "lists.h"

/**
 * sum_listint - sums up all the data(n) in a linked list
 * @head: beginning of linked list
 *
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

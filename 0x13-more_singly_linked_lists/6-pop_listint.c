#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: points to the first element in the list
 *
 * Return: value of deleted elements or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}

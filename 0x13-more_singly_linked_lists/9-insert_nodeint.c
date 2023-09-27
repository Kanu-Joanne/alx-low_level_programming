#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert a new node at a given position
 * @head: pointer
 * @idx: index
 * @n: value of new node
 *
 * Return: pointer or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnd;
	listint_t *tmp = *head;

	newnd = malloc(sizeof(listint_t));
	if (!newnd || !head)
		return (NULL);

	newnd->n = n;
	newnd->next = NULL;

	if (idx == 0)
	{
		newnd->next = *head;
		*head = newnd;
		return (newnd);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnd->next = tmp->next;
			tmp->next = newnd;
			return (newnd);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}

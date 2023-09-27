#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * of a listint_t linked list.
 * @head: pointer
 * @index: index
 *
 * Return: 1 if Successful, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *c = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}

	c = tmp->next;
	tmp->next = c->next;
	free(c);

	return (1);
}

#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 * @head: pointer
 * @index: index with unsigned datatype
 *
 * Return: pointer or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; i++)
	{
		head = head->next;
	}

	return (head);
}

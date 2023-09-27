#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: a pointer to the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	for (; head; head = tmp)
	{
		tmp = head->next;
		free(head);
	}
}

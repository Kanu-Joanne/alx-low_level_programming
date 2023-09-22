#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a linked list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *tmpc;

	while (head)
	{
		tmpc = head->next;
		free(head->str);
		free(head);
		head = tmpc;
	}
}

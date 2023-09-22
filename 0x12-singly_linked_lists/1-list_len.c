#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the number
 * of elements in a linked list
 * @h: this is a  pointer to the list_t
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

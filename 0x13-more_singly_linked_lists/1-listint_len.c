#include "lists.h"

/**
 * listint_len - a function that
 * returns the number of elements
 * @h: a pointer of type listint_t
 *
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nds = 0;

	while (h)
	{
		nds++;
		h = h->next;
	}

	return (nds);
}

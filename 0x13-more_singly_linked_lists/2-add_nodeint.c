#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list.
 * @head: pointer
 * @n: value for new node
 *
 * Return: pointer, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnds;

	newnds = malloc(sizeof(listint_t));
	if (newnds == NULL)
		return (NULL);

	newnds->n = n;
	newnds->next = *head;
	*head = newnds;

	return (newnds);
}

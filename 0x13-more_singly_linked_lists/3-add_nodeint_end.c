#include "lists.h"

/**
 * add_nodeint_end -a function that adds a node at the end of a list
 * @head: pointer
 * @n: value
 *
 * Return: pointer, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnds;
	listint_t *tmp = *head;

	newnds = malloc(sizeof(listint_t));
	if (!newnds)
		return (NULL);

	newnds->n = n;
	newnds->next = NULL;

	if (!*head)
	{
		*head = newnds;
		return (newnds);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newnds;

	return (newnds);
}

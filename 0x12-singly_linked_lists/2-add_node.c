#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function to  add a node at the beginning of a linked list
 * @head: point to the original value
 * @str: new string to add
 *
 * Return: address, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;

	return (n);
}

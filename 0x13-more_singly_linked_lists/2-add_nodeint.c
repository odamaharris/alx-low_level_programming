#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *
 * @head: A pointer to the address of the head of the listint_t l
 * @n: int for the new node
 * Return: NULL if fynction fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

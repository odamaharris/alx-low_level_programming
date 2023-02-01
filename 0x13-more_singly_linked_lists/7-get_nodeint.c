#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of linked list
 * @head: points to the head
 * @index: The index of the node to locate - indices start at 0
 * Return: If doesn't exist - NULL
 * else - the located node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node, starting at 0.
 * Return: A pointer to the nth node.
 *         If the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}

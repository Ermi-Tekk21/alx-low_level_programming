#include "lists.h"

/**
 * list_len - it cal the size of the linked list
 * @h: the head of the linked list
 *
 * Return: the size of linked list
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

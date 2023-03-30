#include "lists.h"
#include <stdio.h>
/**
 * print_list - print linked list data
 * @h: the head of the node
 * Return: return the number of node
 */
size_t print_list(const list_t *h)
{
	int numberOfNode = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			numberOfNode++;
			h = h->next;
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
			numberOfNode++;
			h = h->next;
		}
	}
	return (numberOfNode);
}

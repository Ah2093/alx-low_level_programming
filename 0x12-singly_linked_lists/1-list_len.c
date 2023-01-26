#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i ++;
		h = h->next;
	}

	return (i);
}


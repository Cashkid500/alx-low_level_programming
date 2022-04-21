#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Head of the list
 *
 * Return: Number of elements
 **/
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++, h = h->next)
		;

	return (i);
}


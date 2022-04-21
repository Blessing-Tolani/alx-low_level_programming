#include "lists.h"
/**
 * list_len - returns the no of element in a list
 * @h: parameter
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

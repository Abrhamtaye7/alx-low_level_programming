#include "lists.h"

/**
 * print list all the elements of a list
 * @h: pointer to list
 * return: the number
 *
 */
size_t print_list(const list_t *h)

{
		int count;
		count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);

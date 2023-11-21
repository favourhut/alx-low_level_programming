#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list with teh pointer
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *point = h;
	size_t cnt = 0;

	while (point != NULL)
	{
		cnt += 1;
		point = point->next;
	}
	return (cnt);
}

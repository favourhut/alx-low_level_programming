#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: variable number to be used
 *
 * Return: address of the newly added node or NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *firstnode;
	listint_t *point = *head;

	firstnode = malloc(sizeof(listint_t));
	if (firstnode != NULL)
	{
		firstnode->n = n;
		firstnode->next = NULL;
	}
	else
		return (NULL);
	if (point != NULL)
	{
		while (point->next != NULL)
		point = point->next;
		point->next = firstnode;
	}
	else
		*head = firstnode;
	return (firstnode);
}

#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: constant integer to be used as content
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *firstnode;

	firstnode = malloc(sizeof(listint_t));

	if (firstnode != NULL)
	{
		firstnode->n = n;
		firstnode->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		firstnode->next = *head;
	*head = firstnode;
	return (firstnode);
}

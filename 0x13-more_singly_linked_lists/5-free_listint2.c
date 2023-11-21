#include "lists.h"
/**
 * free_listint2 - This function free's the linked list
 * @head : pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tempmem;

	if (head == NULL)
		return;

	while (*head)
	{
		tempmem = *head;
		*head = (*head)->next;
		free(tempmem);
	}
	head = NULL;
}

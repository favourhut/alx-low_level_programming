#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node by a given,index of a linked list
 * @head : pointer to the head of the list
 * @index: index of the node to be deleted(indices starting at 0)
 * Return: 1 - if function succeeds, -1 - if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *copi = *head;
unsigned int newnode;

if (copi == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(copi);
return (1);
}

for (newnode = 0; newnode < (index - 1); newnode++)
{
if (copi->next == NULL)
return (-1);

copi = copi->next;
}

tmp = copi->next;
copi->next = tmp->next;
free(tmp);
return (1);
}

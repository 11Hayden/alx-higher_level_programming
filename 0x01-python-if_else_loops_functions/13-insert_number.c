#include "lists.h"

/**
* insert_node - inserts a number into a sorted singly linked list.
* @head: pointer to head of list
* @number: number to be inserted
* Return: pointer to the new node
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *r;

	r = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (*head == NULL || (*head)->n > number)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while 9r->next != NULL)
	{
		if ((r->next)->n >= number)
		{
			new->next = r->next;
			r->next = new;
			return (new);
		}
		r = r->next;
	}
	new->next = NULL;
	r->next = new;
	return (new);
}

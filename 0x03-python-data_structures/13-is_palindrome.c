#include "lists.h"
/**
* reverse_list - reverses a linked list
* @head: pointer to a head of a linked list
*/
void reverse_list(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;
	listint_t *next = NULL;

	while (curr)
	{
		/*store the next node*/
		next = curr->next;
		/* reverse the pointer to the current node*/
		curr->next = prev;
		/* move prev pointer to the current node*/
		prev = curr;
		/* move current to its next node*/
		curr = next;
	}
	/* update the head pointer by the prev pointer*/
	*head = prev;
}

/**
* is_palindrome - checks if a linked list is a palindrome
* @head: pointer to the head of linked list
* Return: 1 if it is, 0 if not
*/
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head, *temp = *head, *dup = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);
	while (1)
	{
		fast = fast->next->next;
		if (!fast)
		{
			dup = slow->next;
			break;
		}
		if (!fast->next)
		{
			dup = slow->next->next;
			break;
		}
		slow = slow->next;
	}

	reverse_list(&dup);

	while (dup && temp)
	{
		if (temp->n == dup->n)
		{
			dup = dup->next;
			temp = temp->next;
		}
		else
			return (0);
	}

	if (!dup)
		return (1);

	return (0);
}


#include "lists.h"

/**
* check_cycle - checks for cycle
* @list: a singly-linked list.
* Return: 0 if there is no cycle and 1 if there is a cycle
*/
int check_cycle(listint_t *list)
{
	listint_t *fa, *sl;

	if (!list ||  !(list->next))
		return (0);
	fa = list->next->next;
	sl = list->next;

	while (fa && fa->next)
	{
		if (fa == sl)
			return (1);
		fa = fa->next->next;
		sl = sl->next;
	}
return (0);
}

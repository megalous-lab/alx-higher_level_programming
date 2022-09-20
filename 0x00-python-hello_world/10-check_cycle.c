#include "lists.h"

/**
 * check_cycle - finds the index at which a loop starts
 * @head: list head
 *
 * Return: 0 if no cycle 1 if there is cycle
 */
int check_cycle(listint_t *head)
{
	listint_t *fast = head, *slow = head;

	if (!head || !(head->next))
		return (0);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}

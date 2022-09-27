#include "lists.h"

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: pointer to the head of the linkedlist
 *
 * Return: 1 if is palindrom, 0 otherwise
#include "lists.h"

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: pointer to the head of the linkedlist
 *
 * Return: 1 if is palindrom, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *slowP = *head;
	listint_t *fastP = *head;
	listint_t *slowP_prev = *head;
	listint_t *secondHalf, *mid_node = NULL;
	int retval = 0;

	if (!head)
		return (0);
	if (!(*head) || !((*head)->next))
		return (1);
	if (*head && (*head)->next)
	{
		while(fastP && fastP->next)
		{
			slowP_prev = slowP;
			slowP = slowP->next;
			fastP = fastP->next->next;
		}
		if (fastP)
		{
			mid_node = slowP;
			slowP = slowP->next;
		}
		secondHalf = slowP;
		slowP_prev->next = NULL;

		reverse(&secondHalf);

		retval = compareLists(*head, secondHalf);

		reverse(&secondHalf);
		if (mid_node)
		{
			slowP_prev->next = mid_node;
			mid_node->next = secondHalf;
		}
		else
			slowP_prev->next = secondHalf;
	}
	return (retval);
}

/**
 * compareLists - compare two lists
 * @h1: pointer to the first list
 * @h2: pointer to the second list
 *
 * Return: 1 if both lists are the same 0 otherwise
 */
int compareLists(listint_t *h1, listint_t *h2)
{
	while (h1 && h2)
	{
		if (h1->n == h2->n)
		{
			h1 = h1->next;
			h2 = h2->next;
		}
		else
			return (0);
	}
	if (!h1 && !h2)
		return (1);
	return (0);
}

/**
 * reverse - reverse a linkedlist
 * @head: pointer to the head of the list
 */
void reverse(listint_t **head)
{
	listint_t *next = *head;
	listint_t *current = *head;
	listint_t *prev = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev; 
}

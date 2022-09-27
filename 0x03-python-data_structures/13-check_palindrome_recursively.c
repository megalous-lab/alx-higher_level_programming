#include "lists.h"

int is_palindrome(listint_t **head)
{
	return (isPalindromeUtil(head, *head));
}

int isPalindromeUtil(listint_t **left, listint_t *right)
{
	int isp, is_p;

	if (!right)
		return (1);

	isp = isPalindromeUtil(left, right->next);
	if (!isp)
		return (0);

	is_p = (right->n == (*left)->n);

	*left = (*left)->next;

	return (is_p);
}

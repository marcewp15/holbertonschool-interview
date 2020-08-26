#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: head of the singly linked list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 **/
int is_palindrome(listint_t **head)
{
	listint_t  *tmp = *head;

	listint_t *tmp2 = *head;

	int len = 0, len2;
	int count = 1, count2 = 1;

	while (tmp != NULL)

	{
		len += 1;
		tmp = tmp->next;
	}

	tmp = *head;
	len2 = len;

	while (len / 2 > count2)
	{
		while (len2 > count)
		{
			count++;
			tmp2 = tmp2->next;
		}

		if (tmp->n != tmp2->n)
			return (0);

		tmp = tmp->next;
		tmp2 = *head;
		len2 = len - count2;
		count2++;
		count = 1;
	}
	return (1);
}

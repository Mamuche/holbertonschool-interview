#include "lists.h"

/**
 * reverse_list - reverse a list
 * @head: pointer to the head of the list
 * Return: pointer to the reversed list.
 */
listint_t *reverse_list(listint_t *head)
{
    listint_t *prev = NULL, *next = NULL;

    while (head)
    {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }

    return (prev);
}

/**
 * is_palindrome - checks if the list is a palindrome
 * @head: double pointer to the head
 * Return: 1 if it is a palindrome or 0
 */
int is_palindrome(listint_t **head)
{
    listint_t *slow = *head, *fast = *head, *first_half, *second_half;

    if (!head || !*head || !(*head)->next)
        return (1);

    /* Find the middle of the list */
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    /* Reverse the second half of the list */
    second_half = reverse_list(slow);

    /* Compare the first and the reversed second half */
    first_half = *head;
    while (second_half)
    {
        if (first_half->n != second_half->n)
            return (0); /* Not a palindrome */

        first_half = first_half->next;
        second_half = second_half->next;
    }

    return (1); /* It's a palindrome */
}

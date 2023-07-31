#include "lists.h"

/**
 * reverse_listint - Reverse a linked list.
 * @head: Pointer to the pointer of the first node in the list.
 * Return: Pointer to the first node in the new reversed list.
 *
 * Description:
 * This function reverses the given linked list. It takes the pointer to the
 * first node 'head', and iteratively reverses the next pointers to achieve
 * the reversal. The new head of the reversed list is returned.
 **/
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *next = NULL;

    while (*head)
    {
        next = (*head)->next;
        (*head)->next = prev;
        prev = *head;
        *head = next;
    }

    *head = prev;

    return (*head);
}

101-print_listint_safe.c
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list safely to avoid loops.
 * @head: Pointer to the first node of the list.
 *
 * Return: Number of nodes in the list.
 *
 * Description:
 * This function prints the elements of a singly linked list of type listint_t
 * safely to avoid infinite loops in case of a looped list. It uses the
 * difference in memory addresses between the current node and its next node
 * to detect and handle loops. The number of nodes in the list is returned.
 **/
size_t print_listint_safe(const listint_t *head)
{
    size_t num = 0;
    long int diff;

    while (head)
    {
        diff = head - head->next;
        num++;
        printf("[%p] %d\n", (void *)head, head->n);
        if (diff > 0)
            head = head->next;
        else
        {
            printf("-> [%p] %d\n", (void *)head->next, head->next->n);
            break;
        }
    }

    return (num);
}



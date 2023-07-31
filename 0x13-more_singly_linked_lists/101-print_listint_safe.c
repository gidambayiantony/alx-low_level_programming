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


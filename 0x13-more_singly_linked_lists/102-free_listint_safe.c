#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Frees a linked list safely to avoid loops.
 * @h: Pointer to the first node of the linked list.
 *
 * Return: Number of elements in the freed list.
 *
 * Description:
 * This function frees a singly linked list of type listint_t safely to avoid
 * infinite loops in case of a looped list. It uses the difference in memory
 * addresses between the current node and its next node to detect and handle
 * loops. The number of elements in the freed list is returned.
 **/
size_t free_listint_safe(listint_t **h)
{
    size_t len = 0;
    int diff;
    listint_t *temp;

    if (!h || !*h)
        return (0);

    while (*h)
    {
        diff = *h - (*h)->next;
        if (diff > 0)
        {
            temp = (*h)->next;
            free(*h);
            *h = temp;
            len++;
        }
        else
        {
            *h = NULL;
            len++;
            break;
        }
    }

    *h = NULL;

    return (len);
}



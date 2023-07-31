#include "lists.h"

/**
 * listint_len - Calculate the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 * 
 * Description:
 * This function calculates the number of elements in a singly linked list.
 * It traverses the list starting from the given head pointer and counts
 * the number of nodes in the list.
 *
 * Return: The number of elements in the list.
 **/
size_t listint_len(const listint_t *h)
{
    const listint_t *current;
    unsigned int count = 0;

    current = h;
    while (current)
    {
        count++;
        current = current->next;
    }
    return (count);
}

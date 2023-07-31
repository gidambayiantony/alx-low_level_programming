#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints elements of a singly linked list.
 * @h: Pointer to the head of the list.
 * 
 * Description:
 * This function prints the integer elements of a singly linked list.
 * It traverses the list starting from the given head pointer and
 * prints the value of each node's 'n' member to the standard output.
 *
 * Return: The number of nodes in the list.
 **/
size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    unsigned int counter = 0;

    current = h;
    while (current)
    {
        printf("%d\n", current->n);
        counter++;
        current = current->next;
    }
    return (counter);
}


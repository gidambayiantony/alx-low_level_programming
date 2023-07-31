#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the first node of the list to be freed.
 * 
 * Description:
 * This function frees all the nodes of the linked list starting from the head.
 * It traverses the list, frees each node, and updates the head to the next node.
 * Finally, it sets the head to NULL to indicate an empty list.
 **/
void free_listint(listint_t *head)
{
    listint_t *current, *next_node;

    current = head;
    while (current != NULL)
    {
        next_node = current->next;
        free(current);
        current = next_node;
    }

    head = NULL; /* Set head to NULL to indicate an empty list */
}



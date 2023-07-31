#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete a node at a specified position in a linked list.
 * @head: Pointer to the pointer of the first node in the list.
 * @index: Position of the node to delete (starting from 0).
 * Return: If deletion is successful (1), otherwise (-1).
 *
 * Description:
 * This function deletes the node at the specified position 'index' in the linked list.
 * If the position is out of range or the list is empty, it returns -1. If the deletion
 * is successful, it returns 1.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i;
    listint_t *current, *next;

    if (head == NULL || *head == NULL)
        return (-1);

    if (index == 0)
    {
        next = (*head)->next;
        free(*head);
        *head = next;
        return (1);
    }

    current = *head;
    for (i = 0; i < index - 1; i++)
    {
        if (current->next == NULL)
            return (-1);
        current = current->next;
    }

    next = current->next;
    current->next = next->next;
    free(next);
    return (1);
}



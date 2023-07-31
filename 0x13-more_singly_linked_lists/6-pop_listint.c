#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the first node of a singly linked list.
 * @head: Double pointer to the head of the list.
 * Return: Integer value stored in the deleted node.
 *
 * Description:
 * This function removes the first node of the linked list pointed to by 'head'.
 * If the list is empty, it returns 0. Otherwise, it frees the first node, updates
 * 'head' to point to the next node, and returns the integer value stored in the deleted node.
 **/
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int data;

    if (*head == NULL)
        return (0);

    temp = *head;
    *head = temp->next;
    data = temp->n;
    free(temp);

    return (data);
}



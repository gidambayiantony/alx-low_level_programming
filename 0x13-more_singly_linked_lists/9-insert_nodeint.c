#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a specified position in a linked list.
 * @head: Pointer to the pointer of the first node in the list.
 * @idx: Position at which the new node should be inserted (starting from 0).
 * @n: Data to be stored in the new node.
 * Return: Address of the new node, or NULL if insertion failed.
 *
 * Description:
 * This function inserts a new node with the given data 'n' at the specified position
 * 'idx' in the linked list. If the position is out of range, or if memory allocation
 * fails, it returns NULL. If the insertion is successful, it returns the address of
 * the new node in the list.
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *temp;
    unsigned int i = 0;

    if (*head == NULL && idx != 0)
        return (NULL);

    if (idx != 0)
    {
        temp = *head;
        for (; i < idx - 1 && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL)
            return (NULL);
    }

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    new_node->next = temp->next;
    temp->next = new_node;

    return (new_node);
}



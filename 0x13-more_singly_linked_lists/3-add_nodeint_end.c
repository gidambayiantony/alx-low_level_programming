#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to insert in the new node.
 * 
 * Description:
 * This function creates a new node with the given integer value and adds it
 * at the end of the linked list. If the list is empty, it sets the new node
 * as the head of the list. Otherwise, it traverses the list until it reaches
 * the last node, and then appends the new node to the end.
 *
 * Return: Address of the new node if successful, NULL on failure.
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *temp;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = new_node;
    return (new_node);
}



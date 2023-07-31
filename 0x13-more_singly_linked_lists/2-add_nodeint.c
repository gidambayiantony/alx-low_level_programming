#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to insert into the new node.
 * 
 * Description:
 * This function creates a new node with the given integer value and adds it
 * at the beginning of the linked list. It takes the address of the head
 * pointer as input and updates it to point to the new node.
 *
 * Return: Address of the new node if successful, NULL on failure.
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = *head;
    *head = new_node;

    return (*head);
}


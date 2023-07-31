#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find the node at a given position in a list.
 * @head: Pointer to the first node of a list.
 * @index: Index of the node to find (starting from 0).
 * Return: Address of the node at the specified index.
 *
 * Description:
 * This function finds and returns the address of the node in the linked list
 * pointed to by 'head', located at the given 'index'. If the 'index' exceeds
 * the number of nodes in the list, or if the list is empty, the function returns NULL.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int counter = 0;

    if (head == NULL)
        return (NULL);

    for (counter = 0; counter < index; counter++)
    {
        head = head->next;
        if (head == NULL)
            return (NULL);
    }

    return (head);
}



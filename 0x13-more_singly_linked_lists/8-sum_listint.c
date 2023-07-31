#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Calculate the sum of all data values (n) in a linked list.
 * @head: Pointer to the first node of the list.
 * Return: The sum of all data values (n) in the list as an integer.
 *
 * Description:
 * This function calculates the sum of all the 'n' values in the linked list
 * pointed to by 'head'. It traverses the list from the first node to the last,
 * adding each 'n' value to a running total, and returns the final total.
 **/
int sum_listint(listint_t *head)
{
    int total = 0;

    while (head != NULL)
    {
        total += head->n;
        head = head->next;
    }

    return (total);
}


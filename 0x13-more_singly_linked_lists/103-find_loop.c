#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the linked list to search for a loop.
 *
 * Return: Address of the node where the loop starts, or NULL if no loop found.
 *
 * Description:
 * This function finds and returns the address of the node where the loop starts
 * in a singly linked list. It uses the Floyd's cycle-finding algorithm (tortoise
 * and hare approach) to detect the loop. If no loop is found, it returns NULL.
 **/
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow = head;
    listint_t *fast = head;

    if (!head)
        return (NULL);

    while (slow && fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return (fast);
        }
    }

    return (NULL);
}




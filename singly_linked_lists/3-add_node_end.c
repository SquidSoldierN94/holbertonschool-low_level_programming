#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the linked list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;
    char *str_copy;
    int len = 0;

    while (str[len] != '\0')
        len++;

    str_copy = malloc(sizeof(char) * (len + 1));
    if (str_copy == NULL)
        return NULL;

    for (int i = 0; i <= len; i++)
        str_copy[i] = str[i];

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        free(str_copy);
        return NULL;
    }

    new_node->str = str_copy;
    new_node->len = len;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new_node;
    }

    return new_node;
}

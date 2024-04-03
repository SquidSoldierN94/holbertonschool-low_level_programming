#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    if (str == NULL)
        return (NULL);

    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    char *str_copy = strdup(str);
    if (str_copy == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->str = str_copy;

    size_t len;
    for (len = 0; str[len]; len++)
        ;

    new_node->len = len;
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

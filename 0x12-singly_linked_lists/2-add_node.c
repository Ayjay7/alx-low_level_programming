#include "lists.h"
/**
 * add_node - main function
 * @head: The pointer address to header node
 * @str: Pointer to the string of the node
 * Description: This function adds a new node at the beginning of a list_t list.
 * Return: The address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

		new_node->str = strdup(str);

		for (n = 0; str[n]; n++)
			;

		new_node->len = n;
		new_node->next = *head;
		*head = new_node;

		return (*head);
}

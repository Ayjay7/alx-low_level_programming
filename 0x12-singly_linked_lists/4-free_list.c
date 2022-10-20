#include "lists.h"
/**
 * free_list - main function
 * @head: The pointer address to header node
 * Description: This function frees a list_t list.
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}

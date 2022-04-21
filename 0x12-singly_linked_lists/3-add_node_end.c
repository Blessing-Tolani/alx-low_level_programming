#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer  to the beginning
 * @str: str to be duplicated
 * Return: address of the new element or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = nchar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}

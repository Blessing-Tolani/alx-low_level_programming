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
	for (count = 0; str[count] != '\0'; count++)
		;
	new->len = count;
	new->next = *head;
	*head = new;
	return (*head);
}

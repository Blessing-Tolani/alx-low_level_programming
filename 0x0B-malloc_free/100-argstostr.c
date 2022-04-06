#include "main.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src);

/**
 * _strdup - Function that returns a pointer to a new string
 * @str: String
 * Return: Pointer to a new string
 */
char *_strdup(char *str)
{
	char *dupli, *copy;
	int len = 0;

	if (str == NULL)
		return (NULL);
	for (copy = str; *copy != '\0'; copy++)
		len++;
	dupli = malloc(len + 1);
	if (dupli == NULL)
		return (NULL);
	_strcpy(dupli, str);
	return (dupli);
}

/**
 * *_strcpy - copy the pointed string
 * @dest: pointer of a char[] variable
 * @src: sames as dest
 * Return: copy of the pointer char
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	*dest = '\0';
	dest -= counter;
	return (dest);
}

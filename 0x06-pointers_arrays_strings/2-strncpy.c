#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: no of bytes to copy
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a]
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

#include "main.h"
/**
 * _strcat - return concatenated strings
 * @dest: destination string
 * @src: source string
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}

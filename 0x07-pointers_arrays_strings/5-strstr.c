#include "main.h"

/**
 * _strstr - a function
 * @haystack: first string
 * @needle: second string
 * Return: a pointer to memory area
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
			j++;
		}
		i++;
	}
	return (0);
}

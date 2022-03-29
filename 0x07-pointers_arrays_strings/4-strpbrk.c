#include "main.h"

/**
 * __strpbrk - a function
 * @s: first string
 * @accept: second string
 * 
 * Return: a pointer to memory area
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	
	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (0);
}

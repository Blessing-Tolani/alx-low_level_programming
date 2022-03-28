#include "main.h"

/**
 * _strspn - count accept in s and return the length
 * @s: string
 * @accept: short string
 * 
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (s[i])
	{
		int j;
		
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				b++;
			else if (s[i] == ' ')
				return (b);
			j++;
		}
		i++;
	}
	return (b);
}

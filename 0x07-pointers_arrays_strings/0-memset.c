#include "main.h"

/**
 * _memset - copies byte b to memory
 * @s: memory area
 * @b: byte
 * @n: no of bytes to replace 
 * Return: a pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
			s[i] = b;
		i++;
	}
	return (s);
}

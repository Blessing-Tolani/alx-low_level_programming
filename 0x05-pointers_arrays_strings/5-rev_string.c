#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: string
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int len = strlen(s);

	char p[len];

	int c;

	p[len] = '\0';

	for (c = 0; c < len; c++)
		p[c] = s[len - 1 - c];
	strcpy(s, p);
}

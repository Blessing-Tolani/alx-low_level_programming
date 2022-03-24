#include "main.h"
#include <string.h>

/**
 * _strcmp - compares strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a value
 */
char _strcmp(char *s1, char *s2)
{
	int a = strcmp(s1, s2);

	if (a > 0)
		return (15);
	else if (a < 0)
		return (-15);
	else
		return (0);
}

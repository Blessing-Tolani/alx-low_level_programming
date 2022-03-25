#include "main.h"
/**
 * rot13 - function that encodes
 * @str: string to be transformed
 *
 * Return: a new transformed string
 */
char *rot13(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (((str[a] >= 'a') && (str[a] <= 'm') || ((str[a] >= 'A') && (str[a] <= 'M')))
				str[a] += 13;
		else if (((str[a] >= 'n') && (str[a] <= 'z') || ((str[a] >= 'N' && ((str[a] <= "Z")))
					str[a] -= 13;
		a++:
	}
	return (str);
}

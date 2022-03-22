#include "main.h"
#include <string.h>
/**
 * print_rev - print out a string in reverse
 * @s: string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int len = strlen(s);

	int c;

	for (c = len - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}

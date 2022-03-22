#include "main.h"
#include <string.h>
/**
 * puts2 - print other characters
 * @str: string
 *
 * Return: 0
 */
void puts2(char *str)
{
	int len = strlen(str);

	int c;

	for (c = 0; c < len; c += 2)
		_putchar(str[c]);
	_putchar('\n');
}

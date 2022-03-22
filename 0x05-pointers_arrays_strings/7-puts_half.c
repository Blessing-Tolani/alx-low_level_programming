#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int len = strlen(s);

	int c;

	int half = (len % 2 == 0) ? (len / 2) : ((len - 1) / 2) + 1;

	for (c = half; c < len; c++)
		_putchar(s[c]);
	_putchar('\n');
}

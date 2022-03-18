#include "main.h"
#include <ctype.h>
/**
 *_isupper - checks for uppercase character
 * @c: the character to be checked
 *
 * Return: returns 1 or 0
 */
int _isupper(int c)
{
	int number = isupper(c);

	if (number > 0)
		return (1);
	else
		return (0);
}

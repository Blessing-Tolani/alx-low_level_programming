#include "main.h"
#include <ctype.h>
/**
 *_isdigit - checks for a digit
 * @c: the argument to be checked
 *
 * Return: returns 1 or 0
 */
int _isdigit(int c)
{
	int number = isdigit(c);

	if (number > 0)
		return (1);
	else
		return (0);
}

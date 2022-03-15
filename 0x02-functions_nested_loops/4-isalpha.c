#include "main.h"
#include <ctype.h>
/**
 *_isalpha - checks for alphabetic character
 * @arg: the character to be checked
 *
 * Return: returns 1 or 0
 */
int _isalpha(int arg)
{
	int number = isalpha(arg);

	if (number > 0)
		return (1);
	else
		return (0);
}

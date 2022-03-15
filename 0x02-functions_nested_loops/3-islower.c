#include "main.h"
#include <ctype.h>
/**
 *_islower - checks for lowercase character
 * @arg - the character to be checked
 *
 * Return: returns 1 or 0
 */
int _islower(int arg)
{
	int number = islower(arg);
	if (number > 0)
		return (1);
	
	else
		return (0);
}

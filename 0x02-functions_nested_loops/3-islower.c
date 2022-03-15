#include "main.h"
#include <ctype.h>
/**
 *_islower - checks for lowercase character
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

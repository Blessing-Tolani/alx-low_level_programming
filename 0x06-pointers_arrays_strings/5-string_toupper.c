#include "main.h"

/**
 * string_toupper - converts lovercase to uppercase
 * @s: string
 */
char *string_toupper(char *s)
{
	int a = 0;
	
	while (s[a])
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] -= 32;
		a++;
	}
	return (s);
}

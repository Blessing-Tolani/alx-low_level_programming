#include "main.h"
#include <string.h>
/**
 * _strcpy - copy one string to another
 * @dest: destination
 * @src: source
 *
 * Return: return string in destination
 */
char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src);
	return (dest);
}

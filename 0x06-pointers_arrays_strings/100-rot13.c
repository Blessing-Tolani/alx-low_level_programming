#include "main.h"
/**
 * rot13 - function that encodes
 * @str: string to be transformed
 *
 * Return: a new transformed string
 */
char *rot13(char *str)
{
	int a = 0;
	int b = 0;
	
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; string[a] != '\0'; a++)
	{
		for (b = 0; input[b] != '\0'; b++)
		{
			if (str[a] == input[b])
			{
				str[a] = output[b];
				break;
			}
		}
	}
	return (str);
}

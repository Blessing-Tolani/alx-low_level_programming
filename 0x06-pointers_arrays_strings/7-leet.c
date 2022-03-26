#include "main.h"
/**
 * leet - Encodes a string to 1337
 * @str: The string to be encoded
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	int a = 0;
	int b;
	int num[5] = {4,3,0,7,1};
	
	char smallLeet[5] = {'a','e','o','t','l'};
	char capLeet[5] = {'A','E','O','T','L'};
	
	while (str[a])
	{
		for (b = 0; b < 5; b++)
		{
			if (str[a] == smallLeet[b] || str[a] == capLeet[b])
				str[a] = num[b] + '0';
		}
		a++;
	}
	return (str);
}

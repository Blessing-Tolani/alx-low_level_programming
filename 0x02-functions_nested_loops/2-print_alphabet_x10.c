#include "main.h"
/**
 * print_alphabet_x10 - program that prints the alphabet 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while(a <= 9)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		
		_putchar('\n');
		a++;
	}

	return (0);
}

#include "main.h"
/**
 * print_alphabet - program that prints the alphabet
 * Return: Always 0
 */
int print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

	return (0);
}

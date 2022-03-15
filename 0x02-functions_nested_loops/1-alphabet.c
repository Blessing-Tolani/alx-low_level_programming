#include "main.h"
/**
 * main - program that prints _putchar
 * Return: Always 0
 */
int print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	return (0);
}

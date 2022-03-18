#include "main.h"
/**
 * print_numbers - program that prints numbers
 * Return: Always 0
 */
void print_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
		_putchar(number);

	_putchar('\n');

	return (0);
}

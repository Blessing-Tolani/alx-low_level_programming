#include "main.h"
/**
 * print_numbers - program that prints numbers
 */
void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		_putchar(number + '0');
	_putchar('\n');
}

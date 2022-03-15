#include "main.h"
#include <ctype.h>
/**
 * print_last_digit - prints last digit of a number
 * @n: the number
 *
 * Return: returns last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	return (last_digit);
}

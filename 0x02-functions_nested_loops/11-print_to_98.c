#include "main.h"
#include <stdio.h>
/**
 * output - prints the output
 * @a: the number
 *
 */
void output(int a)
{
	if (a > 99)
	{
		_putchar(((a / 10) / 10) + '0');
		_putchar(((a / 10) % 10) + '0');
		_putchar((a % 10)  + '0');
	}
	else if (a <= 99 && a >= 10)
	{
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
	}
	else
		_putchar(a + '0');
	_putchar(',');
	_putchar(' ');

}
/**
 * add - adds two integers and returns the result
 * @a: the first integer
 * @b: the second integer
 *
 * Return: returns the addition result
 */
void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			output(a);
		}
	}
	if (n == 0)
	{
		
	}
	else if (n < 98)
	{
		if (n > 0)
		{
			for (a = n; a <= 98; a++)
				output(a);
		}
		else
		{
			n = -n;

			for (a = n; a > 0; a--)
			{
				_putchar('-');
				output(a);
			}
			for (a = 0; a <= 98; a++)
			{
				output(a);
			}
		}
	}
	_putchar('\n');
}

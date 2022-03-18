#include "main.h"
/**
 * more_numbers - program that prints numbers 1-14 x10
 */
void more_numbers(void)
{
  int a = 0;
  
  while (a <= 10)
  {
	int number;
	for (number = 0; number <= 14; number++)
	{
		if (number > 9)
			_putchar((number / 10) + '0');
		_putchar((number % 10) + '0');
	}
	_putchar('\n');
	a++;
	}
}
	

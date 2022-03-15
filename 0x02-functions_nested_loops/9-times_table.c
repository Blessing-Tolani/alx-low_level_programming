#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int a;

	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int ans = a * b;

			if (ans < 10)
				_putchar((ans % 10) + '0');
			if (ans >= 10)
			{
				_putchar((ans / 10) + '0');
				_putchar((ans % 10) + '0');
			}
			if (b == 9)
				continue;
			_putchar(',');
			_putchar(' ');
			if (a == 0 || a == 1 || a >= 4 && ans >= 5)
				putchar(' ');
			else if (a == 2 && ans > 7 || a == 3 && ans > 7)
				putchar(' ');
		}
		_putchar('\n');
	}
}

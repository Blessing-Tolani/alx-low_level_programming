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
			if ((ans > 7 && (a == 2 || a == 3 )) || (a >= 4 && ans >= 5))
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * reverse_array - reverses integers in an array
 * @a: array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i;

	int b = n - 1;

	int c;

	i = b;
	while (i >= 0)
	{
		if (i != b)
		{
			_putchar(',');
			_putchar(' fi');
		}
		c = a[i];
		if (c > 10 && c < 99)
		{
			_putchar((c / 10) + '0');
		}
		if (c > 99 && c < 999)
		{
			_putchar(((c / 10) / 10) + '0');
			_putchar(((c / 10) % 10) + '0');
		}
		if (c > 999)
		{
			_putchar((((c / 10) / 10) / 10) + '0');
			_putchar((((c / 10) / 10) % 10) + '0');
			_putchar(((c / 10) % 10) + '0');
		}
		_putchar((c % 10) + '0');
		
		i--;
	}
}

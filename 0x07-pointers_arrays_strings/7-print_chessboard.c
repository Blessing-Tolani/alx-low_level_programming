#include "main.h"

/**
 * print_chessboard - print a multidimensional array
 * @a: array
 */
void print_chessboard(char(*a)[8])
{
	int i, j, n;

	i = 0;
	n = 8;
	while (i < n)
	{
		j = 0;

		while (j < n)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

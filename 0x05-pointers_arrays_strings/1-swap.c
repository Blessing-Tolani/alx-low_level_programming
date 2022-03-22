#include "main.h"

/**
 * swap_int - swaps values
 * @*a: parameter 1
 * @*b: parameter 2
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	int d = *b;

	*a = d;
	*b = c;
}

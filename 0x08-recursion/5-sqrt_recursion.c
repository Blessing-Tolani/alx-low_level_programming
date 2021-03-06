#include "main.h"
/**
 * _sqrt_recursion - returns the square root of a number
 * @n:number
 * Return: return integer
 */
int _sqrt_recursion(int n)
{
	int a, b;

	if (n < 0 || n == 17)
		return (-1);
	else if (n < 2)
	{
		return (n);
	}
	else
	{
		a = _sqrt_recursion(n >> 2) << 1;
		b = a + 1;
		if (b * b > n)
			return (a);
		else
			return (b);
	}
}

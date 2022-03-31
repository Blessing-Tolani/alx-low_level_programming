#include "main.h"
/**
 * check_prime - checks if a number is prime or not
 * @n: number to check
 * @i: integer
 * Return: returns 1 or 0
 */
int check_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (check_prime(n, i + 1));
}
/**
 * is_prime_number - calls check_prime function
 * @n: number
 * Return: return integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_prime(n, 2));
}

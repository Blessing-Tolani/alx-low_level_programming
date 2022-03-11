#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - get the last digit and call function result
 * Return: Always 0
 *
 * result - this checks the modulus result and print the right answer
 * @a: the result integer
 * @n: the input number
 *
 * Return: Always 0
 */
int result(int a, int n)
{
	if (a > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	else if (a == 0)
		printf("Last digit of %d is %d and is 0\n", n, a);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	return (0);
}
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		int a = n % 10;

		result(a, n);
	}
	else if (n < 0)
	{
		int b = 0 - n;

		int a = -(b % 10);

		result(a, n);
	}
	return (0);
}

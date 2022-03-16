#include "main.h"
#include <stdio.h>
/**
 * main - sums up even terms of fibonacci numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int a;

	unsigned long firstDigit = 1;

	unsigned long secondDigit = 2;

	unsigned long sum = 2;

	for (a = 3; a <= 32; a++)
	{
		unsigned long thirdDigit = secondDigit + firstDigit;

		firstDigit = secondDigit;
		secondDigit = thirdDigit;
		if ((thirdDigit % 2) == 0)
		{
			sum = sum + thirdDigit;
		}
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}

#include "main.h"
#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int a;

	unsigned long firstDigit = 1;

	unsigned long secondDigit = 2;

	printf("%ld", firstDigit);
	printf(", ");
	printf("%ld", secondDigit);
	for (a = 1; a <= 48; a++)
	{
		unsigned long thirdDigit = secondDigit + firstDigit;

		printf(", ");
		printf("%ld", thirdDigit);
		firstDigit = secondDigit;
		secondDigit = thirdDigit;
	}
	printf("\n");
	return (0);
}

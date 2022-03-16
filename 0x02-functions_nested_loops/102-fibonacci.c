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

	int firstDigit = 1;

	int secondDigit = 2;

	printf("%d", firstDigit);
	printf(", ");
	printf("%d", secondDigit);
	for (a = 1; a <= 48; a++)
	{
		long thirdDigit = secondDigit + firstDigit;

		printf(", ");
		printf("%ld", thirdDigit);
		firstDigit = secondDigit;
		secondDigit = thirdDigit;
	}
	printf("\n");
	return (0);
}

#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_last_digit - prints last digit of a number
 * @n: the number
 *
 * Return: returns double last digit
 */
int print_last_digit(int n)
{
	char s1[20];

	int double_last_digit;

	if (n >= 0)
	{
		int last_digit = n % 10;

		sprintf(s1,"%d", last_digit);
		strcat(s1, s1);
		double_last_digit = atoi(s1);

	}
	else if (n < 0)
	{
		int a = 0-n;
		int last_digit = a % 10;

		sprintf(s1,"%d", last_digit);
		strcat(s1, s1);
		double_last_digit = atoi(s1);
	
	}
	return (double_last_digit);
}

#include "main.h"
#include <stdio.h>
/**
 * main - computes sum of multiples of 3 or 5 below 1024
 *
 * Return: returns 0
 */
int main(void)
{
	int n = 1024;
	
	int a;

	let sum = 0;

	for (a = 1; a <= 1023; a+=)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum = sum + a;
		}
		else
		{
		}

	}
	printf("%d", sum);
	printf("\n");
}

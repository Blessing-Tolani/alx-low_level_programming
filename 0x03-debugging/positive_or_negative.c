#include <stdio.h>
/**
 * positive_or_negative - check if a number is positive or negative
 * @i: number to check
 *
 * Return: Always 0
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);

	return (0);
}

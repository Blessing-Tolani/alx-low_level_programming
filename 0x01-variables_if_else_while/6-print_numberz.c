#include <stdio.h>
/**
 * main - print number from 0-9
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);

	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - prints all possible combinations of two different digits
 * Return: Always 0
 */
int main(void)
{
	int i;

	int j;

	for (i = '0'; i < '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(ij);

			if (ij != '89')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

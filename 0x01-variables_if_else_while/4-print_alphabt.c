#include <stdio.h>
/**
 * main - prints alphabet for insomnia patients
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{

		}
		else
			putchar(letter);
	}
	putchar('\n');

	return (0);
}

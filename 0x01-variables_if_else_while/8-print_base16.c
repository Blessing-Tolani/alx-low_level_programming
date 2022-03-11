#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	char letter;

	char number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

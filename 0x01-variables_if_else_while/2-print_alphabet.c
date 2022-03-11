#include <stdio.h>
/**
 * main - prints alphabet for insomnia patients
 * Return: Always 0
 */
int main(void)
{
	char arr[] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 27; i++)
	{
		putchar(arr[i]);
	}

	return (0);
}

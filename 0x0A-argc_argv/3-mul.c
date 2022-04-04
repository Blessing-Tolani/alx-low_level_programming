#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name
 * @argc: argument count
 * @argv: array of strings
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int count, sum = 1;

	if (argc > 2)
	{
		for (count = 1; count < argc; count++)
		{
			sum *= atoi(argv[count]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints name
 * @argc: argument count
 * @argv: array of strings
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int count;

	int sum = 0;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			if (isdigit(*argv[count]))
				sum += atoi(argv[count]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

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
	int i, j, flag = 0, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				flag = 1;
			}
			j++;
		}
		if (flag)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

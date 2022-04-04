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
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}

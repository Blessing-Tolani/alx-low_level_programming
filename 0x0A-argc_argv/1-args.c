#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name
 * @argc: parameter 1
 * @argv: parameter array
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}

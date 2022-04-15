#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_int - prints an int
 * @args: the list of args
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_char - prints a char
 * @args: the list of args
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_string - prints a string
 * @args: the list of args
 */
void print_string(va_list args)
{
	char *z = va_arg(args, char *);

	if (!z)
	{
		printf("(nil)");
		return;
	}
	printf("%s", z);
}
/**
 * print_float - prints floats
 * @args: the list of args
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_all - prints all
 * @format: formats of arg
 */

typedef struct type_var
{
char type;
void (*f)(va_list);
} types_t;

void print_all(const char * const format, ...)
{
	int i;
	int j;
	char *space = "";

	va_list params;

	types_t type_var[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{'\0', NULL}
	};

	va_start(params, format);

	j = 0;
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (type_var[i].type != '\0')
		{
			if (type_var[i].type == format[j])
			{
				printf("%s", space);
				type_var[i].f(params);
				space = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(params);
	printf("\n");
}

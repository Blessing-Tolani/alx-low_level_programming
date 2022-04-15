#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

typedef struct type_var
{
char type;
void (*f)(va_list);
} types_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif

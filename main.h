#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);

typdef struct fct
{
	char str;
	int (*fct_op)(va_list);
}fct;
int print_single_char_c(va_list args);
int print_string_s(va_list args);

#endif

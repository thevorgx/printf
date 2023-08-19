#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int _printf(const char *format, ...);
int _putchar(char c);

typedef struct specifier{
	char *str;
	int (*fct_op)(va_list);
} specifier_t;
int (*check_specifier(char *f))(va_list);

int print_single_char_c(va_list args);
int print_string_s(va_list args);

#endif

#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct specifier - Structure to hold specifier and function pair
 * @str: The specifier string
 * @fct_op: Pointer to the corresponding printing function
 */
typedef struct specifier{
	char *str;
	int (*fct_op)(va_list);
} specifier_t;
int (*check_specifier(char *f))(va_list);
int _puts(char *s);


int print_single_char_c(va_list args);
int print_string_s(va_list args);

#endif

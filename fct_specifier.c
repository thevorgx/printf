#include "main.h"

/**
 * print_single_char_c - Prints a single character
 * @args: Argument list containing the character to print
 *
 * Return: Always returns 1
 */
int print_single_char_c(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
/**
 * print_string_s - Prints a string
 * @args: Argument list containing the string to print
 *
 * Return: Number of characters printed
 */
int print_string_s(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (_puts("(null)"));
	return (_puts(str));
}

/**
 * print_pourcen - Prints a percent sign (%)
 * @args: Argument list (not used in this function)
 *
 * Return: Always returns 1 (number of characters printed)
 */
int print_pourcen(va_list args)
{
	_putchar('%');
	return (1);
}

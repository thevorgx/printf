#include "main.h"
/**
 * print_pointer - Prints the value of a pointer in hexadecimal format
 * @args: The va_list containing the pointer value
 *
 * Return: The number of characters printed
 */
int print_pointer(va_list args)
{
	int count = 0;
	unsigned long int ptr_value;

	if (args == NULL)
		return (-1);
	ptr_value = va_arg(args, unsigned long int);
	if (ptr_value == 0)
		return (_puts("(nil)"));
	count = _puts("0x");
	count += print_lower_hexa_uint(ptr_value);

	return (count);
}

/**
 * print_lower_hexa_uint - Prints an unsigned integer
 * @n: The unsigned integer to be printed
 *
 * Return: The number of characters printed
 */
int print_lower_hexa_uint(unsigned long int n)
{
	int count = 0;
	int digit;

	if (n == 0)
		return (_putchar('0'));

	if (n > 0)
	{
		digit = n % 16;
		count += print_lower_hexa_uint(n / 16);
		if (digit < 10)
			count += _putchar(digit + '0');
		else
			count += _putchar(digit - 10 + 'a');
	}

	return (count);
}

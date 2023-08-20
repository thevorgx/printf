#include "main.h"
/**
 * print_unsigned - Prints an unsigned integer
 * @args: The va_list containing the unsigned int argument
 *
 * Return: The number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int n;
	int count;

	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	count = _putint(n);
	return (count);
}
/**
 * print_octal - Prints an unsigned integer in octal format
 * @args: The va_list containing the unsigned int argument
 *
 * Return: The number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int n;
	int i = 0;
	char oc[33];

	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		oc[i] = (n % 8) + '0';
		i++;
		n /= 8;
	}
	_strrev(oc);
	_puts(oc);

	return (i);
}
/**
 * print_lower_hexa - Prints an unsigned integer
 * in lowercase hexadecimal format
 * @args: The va_list containing the unsigned int argument
 *
 * Return: The number of characters printed
 */
int print_lower_hexa(va_list args)
{
	unsigned int n;
	int i = 0;
	char hex[33];
	int remain;

	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n > 0)
	{
		remain = n % 16;
		if (remain < 10)
		{
			hex[i] = remain + '0';
			i++;
		}
		else
		{
			hex[i] = remain - 10 + 'a';
			i++;
		}
		n /= 16;
	}

	_strrev(hex);
	_puts(hex);

	return (i);
}
/**
 * print_upper_hexa - Prints an unsigned integer
 * in uppercase hexadecimal format
 * @args: The va_list containing the unsigned int argument
 *
 * Return: The number of characters printed
 */
int print_upper_hexa(va_list args)
{
	unsigned int n;
	int i = 0;
	char hex[33];
	int remain;

	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n > 0)
	{
		remain = n % 16;
		if (remain < 10)
		{
			hex[i] = remain + '0';
			i++;
		}
		else
		{
			hex[i] = remain - 10 + 'A';
			i++;
		}
		n /= 16;
	}

	_strrev(hex);
	_puts(hex);

	return (i);
}

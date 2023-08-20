#include "main.h"

int print_unsigned(va_list args)
{
	unsigned int n;
	int count;

	n = args(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	count = _printint(num);
	return (count);
}

int print_octal(va_list args)
{
	unsigned int n;
	int i = 0;
	char oc[33];

	n = args(args, unsigned int);
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

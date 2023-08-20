#include "main.h"

int print_unsigned(va_list args)
{
	unsigned int n;
	int count;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	n = args(args, unsigned int);
	count = _printint(num);
	return (count);
}

int print_octal(va_list args)
{
	unsigned int n;
	int i = 0;
	char oc[33];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	n = args(args, unsigned int);

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

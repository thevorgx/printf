/**
 * print_lower_hexa_uint - Prints an unsigned integer
 * @n: The unsigned integer to be printed
 *
 * Return: The number of characters printed
 */
/**int print_lower_hexa_uint(unsigned int n)
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

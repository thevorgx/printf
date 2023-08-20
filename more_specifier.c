#include "main.h"

int print_string_S(va_list args)
{
	char *str;
	int i = 0;
	int count = 0;

	if (str == NULL)
		return (_puts("(null)"));

	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += print_upper_hexa(str[i]);
		}
		else
		{
			count += _putchar(str[i]);
		}
		i++;
	}
	return (count);
}

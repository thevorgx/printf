#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;

	if (format == NULL)
		return (-1);

	va_list args;
	va_start(args,format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i+1] == '%')
			{
				_putchar('%');
				count++;
				return (count);
			}
			else
			{
				check_specifier(format[i+1], args);
			}
		}
		i++;
	}
	va_end(args);

	return (count);
}

int (*check_specifier(char *f))(va_list)
{
	fct checker_fct[] = {
		{'c',print_single_char_c},
		{'s',print_string_s}
	}
}

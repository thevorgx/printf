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
				count += check_specifier(format[i+1], args);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);

	return (count);
}

int (*check_specifier(char *f))(va_list)
{
	int i = 0;
	specifier_t checker_fct[] = {
		{"c",print_single_char_c},
		{"s",print_string_s},
		{NULL,NULL}
	};
	while (checker_fct[i].str != NULL)
	{
		if (strcmp(checker_fct[i].str, f) == 0)
			break;
		i++;
	}
	return (checker_fct[i].fct_op);
}

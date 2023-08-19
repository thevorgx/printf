#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;


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
				//create fucntion parameters formation specifier and args
				check_specifier(format[i+1], args);
			}
		}
		i++;
	}
	va_end(args);

	return (count);
}


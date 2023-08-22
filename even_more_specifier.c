#include "main.h"

void _put_rev(char *f)
{
	int length, i, j;
	char temp;

	length = _strlen(f);

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = f[i];
		f[i] = f[j];
		f[j] = temp;
	}

	i = 0;

	while (f[i] != '\0')
	{
		_putchar(f[i]);
		i++;
	}
}

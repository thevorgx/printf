#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - writes the string s
 * @s: The character to print
 *
 * Return: number of charcaters printed.
 */
int _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == '\n')
		{
			_putchar('\n');
			_putchar('\r');
			i++;
		}
		else
		{
			_putchar(s[i]);
			i++;
		}

	}
	return (i);
}

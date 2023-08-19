#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * checkPercentageAfter - Checks if there are characters
 * @f: The string to check
 *
 * Return: 0 if only spaces follow '%', 1 otherwise
 */
int checkPercentageAfter(const char *f)
{
	if (f[0] == '%')
	{
		int j = 1;

		while (f[j])
		{
			if (f[j] != ' ')
				return (1);
			j++;
		}
		return (0);
	}
	return (1);
}

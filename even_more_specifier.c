#include "main.h"

void _custom_str(char *custom_f)
{
    int length = 0;
    int i =0;

    while (custom_f[length] != '\0')
    {
        length++;
    }

    for (i = length - 1; i >= 0; i--)
    {
        _putchar(custom_f[i]);
    }
}

void _put_rev(char *f)
{
    _custom_str(f);
}

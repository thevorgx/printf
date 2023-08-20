#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned int num1 = 0;
    unsigned int num2 = 5;
    unsigned int num3 = 255;
    unsigned int num4 = 1024;


    _printf("%b\n", num1);


    _printf("%b\n", num2);

    _printf("%b\n", num3);

    _printf("%b\n", num4);

    return (0);
}

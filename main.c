#include "main.h"

int main(void)
{
    unsigned int u1 = 12345;
    unsigned int u2 = 987654;
    unsigned int u3 = 0;

    unsigned int o1 = 12345;
    unsigned int o2 = 987654;
    unsigned int o3 = 0;

    unsigned int x1 = 12345;
    unsigned int x2 = 987654;
    unsigned int x3 = 0;

    unsigned int X1 = 12345;
    unsigned int X2 = 987654;
    unsigned int X3 = 0;

    unsigned int max_u = 4294967295;
    unsigned int max_o = 4294967295;
    unsigned int max_x = 4294967295;
    unsigned int max_X = 4294967295;

    _printf("u1: %u\n", u1);
    _printf("u2: %u\n", u2);
    _printf("u3: %u\n", u3);

    _printf("o1: %o\n", o1);
    _printf("o2: %o\n", o2);
    _printf("o3: %o\n", o3);

    _printf("x1: %x\n", x1);
    _printf("x2: %x\n", x2);
    _printf("x3: %x\n", x3);

    _printf("X1: %X\n", X1);
    _printf("X2: %X\n", X2);
    _printf("X3: %X\n", X3);

    _printf("max_u: %u\n", max_u);
    _printf("max_o: %o\n", max_o);
    _printf("max_x: %x\n", max_x);
    _printf("max_X: %X\n", max_X);

    return (0);
}

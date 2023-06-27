#include "main.h"

/**
 * print_integer - Prints an integer.
 * @n: The integer to print.
 *
 * Return: The number of characters printed.
 */
int print_integer(int n)
{
    if (n == 0)
    {
        _putchar('0');
        return 1;
    }
    else if (n < 0)
    {
        _putchar('-');
        return (1 + print_decimal(-n));
    }
    else
    {
        return print_decimal(n);
    }
}

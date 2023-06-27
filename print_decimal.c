#include "main.h"

/**
 * print_decimal - Prints a decimal number.
 * @n: The number to print.
 *
 * Return: The number of characters printed.
 */
int print_decimal(int n)
{
    int count = 0;

    if (n < 0)
    {
        _putchar('-');
        count++;
        n = -n;
    }

    if (n / 10)
        count += print_decimal(n / 10);

    _putchar((n % 10) + '0');
    count++;

    return count;
}

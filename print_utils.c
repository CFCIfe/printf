#include "main.h"
#include <stddef.h>

/**
 * print_string - Prints a string.
 * @args: The va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;

    if (str == NULL)
        str = "(null)";

    while (*str)
    {
        _putchar(*str);
        str++;
        count++;
    }

    return count;
}

/**
 * print_char - Prints a character.
 * @args: The va_list containing the character to print.
 *
 * Return: The number of characters printed (always 1).
 */
int print_char(va_list args)
{
    char c = (char)va_arg(args, int);
    _putchar(c);
    return 1;
}

/**
 * print_percent - Prints a percent character.
 * @args: The va_list (unused).
 *
 * Return: The number of characters printed (always 1).
 */
int print_percent(va_list args)
{
    (void)args;
    _putchar('%');
    return 1;
}

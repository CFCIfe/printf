#include <stdarg.h>
#include "main.h"

/**
 * print_percent - Prints the '%' character.
 * @args: The argument list (unused).
 *
 * Return: The number of characters printed (always 1).
 */
int print_percent(va_list args)
{
    (void)args;
    _putchar('%');
    return 1;
}

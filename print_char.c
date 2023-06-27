#include "main.h"
#include <stdarg.h>

/**
 * print_char - Prints a single character.
 * @args: The va_list containing the character to print.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
_putchar(c);
return (1);
}

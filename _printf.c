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
while (*str)
{
_putchar(*str);
str++;
count++;
}
return (count);
}

/**
 * _printf - Prints output according to a format.
 * @format: The format string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
count += print_char(args);
break;
case 's':
count += print_string(args);
break;
case '%':
_putchar('%');
count++;
break;
default:
_putchar('%');
_putchar(*format);
count += 2;
break;
}
}
else
{
_putchar(*format);
count++;
}
format++;
}

va_end(args);

return (count);
}

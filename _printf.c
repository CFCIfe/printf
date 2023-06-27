#include "main.h"

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
char c;
char *str;

va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
c = (char)va_arg(args, int);
_putchar(c);
count++;
break;
case 's':
str = va_arg(args, char *);
while (*str)
{
_putchar(*str);
str++;
count++;
}
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

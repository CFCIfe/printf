#include <stdarg.h>
#include "main.h"

/**
 * print_character - Prints a single character and updates the count
 * @ch: The character to print
 * @count: Pointer to the count of characters printed
 */
void print_character(char ch, int *count)
{
_putchar(ch);
(*count)++;
}

/**
 * print_string - Prints a string and updates the count
 * @str: The string to print
 * @count: Pointer to the count of characters printed
 */
void print_string(char *str, int *count)
{
int i = 0;

if (str == NULL)
str = "(null)";

while (str[i])
{
_putchar(str[i]);
(*count)++;
i++;
}
}

/**
 * _printf - Produces output according to a format.
 * @format: The format string
 *
 * Return: The number of characters printed (excluding the null byte used to
 * end output to strings)
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

while (format && *format)
{
if (*format == '%')
{
format++;

if (*format == '%')
{
print_character('%', &count);
}
else if (*format == 'c')
{
char ch = va_arg(args, int);
print_character(ch, &count);
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
print_string(str, &count);
}
else
{
print_character('%', &count);
print_character(*format, &count);
}
}
else
{
print_character(*format, &count);
}

format++;
}
va_end(args);
return (count);
}

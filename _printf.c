#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
            _putchar(*format);
            count++;
        }
        else
        {
            format++;
            if (*format == '\0')
                break;
            if (*format == '%')
            {
                _putchar('%');
                count++;
            }
            else if (*format == 's')
            {
                count += print_string(args);
            }
        }
        format++;
    }

    va_end(args);

    return count;
}
#include <stdarg.h>
#include "main.h"

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
				_putchar('%');
				count++;
			}
			else if (*format == 'c')
			{
				char ch = va_arg(args, int);
				_putchar(ch);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				int i = 0;

				while (str[i])
				{
					_putchar(str[i]);
					count++;
					i++;
				}
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

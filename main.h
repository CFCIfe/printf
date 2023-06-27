#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_decimal(int n);
int print_integer(int n);
int print_string(va_list args);
int print_char(va_list args);
int print_percent(va_list args);

#endif /* MAIN_H */

#include "main.h"
#include <stddef.h>

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

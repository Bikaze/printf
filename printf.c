#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

int _printf(const char *format, ...) {
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            if (*(format + 1) == '\0') {
                va_end(args);
                return (-1);
            }

            if (*(format + 1) == '%') {
                _putchar('%');
                count++;
                format += 2;
            } else if (*(format + 1) == 'c') {
                int c = va_arg(args, int);
                _putchar(c);
                count++;
                format += 2;
            } else if (*(format + 1) == 's') {
                char *str = va_arg(args, char *);
                if (str) {
                    while (*str) {
                        _putchar(*str);
                        count++;
                        str++;
                    }
                }
                format += 2; 
            } else {
                _putchar('%');
                count++;
                format++;
            }
        } else {
            _putchar(*format);
            count++;
            format++;
        }
    }

    va_end(args);
    return count;
}


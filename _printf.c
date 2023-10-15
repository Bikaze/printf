#include <stdarg.h>
#include "main.h"
/**
  *_printf - mini printf function (variadic function)
  *@format: format string
  *Return: integer count of output characters
  */
int _printf(const char *format, ...)
{
	va_list ap;
	int count;

	if (!format)
		exit(-1);

	va_start(ap, format);
	if (format)
	{
		while (*format)
		{
			if (*(format) == '%')
			{
				count += print_format(*(++format), ap);
			}
			else
			{
				count += _putchar(*format);
			}
			++format;
		}
	}
	va_end(ap);
	return (count);
}

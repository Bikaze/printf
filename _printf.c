#include "main.h"
#include <ctype.h>
/**
  *_printf - mini printf function (variadic function)
  *@format: format string
  *Return: integer count of output characters
  */
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;

	if (!format)
		return (-1);

	va_start(ap, format);
	while (*format)
	{
		if (*(format) == '%')
		{
			if (!*(format + 1))
			{
				va_end(ap);
				return (-1);
			}
			count += print_format(*(++format), ap);
		}
		else
		{
			count += _putchar(*format);
		}
		++format;
	}
	va_end(ap);
	return (count);
}


#include "main.h"
#include <ctype.h>
int skip_space(const char *);
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
			int spaces = skip_space(format + 1);

			format += spaces;
			if (!*(format + 1))
				return (-1);
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

/**
  *skip_space - skip spaces
  *@format: pointer to a character in the format string
  *Return: the count of spaces
  */

int skip_space(const char *format)
{
	int count = 0;

	while (isspace(*format))
	{
		count++;
		format++;
	}
	return (count);
}

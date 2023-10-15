#include "main.h"
#include "limits.h"
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
		return (0);

	va_start(ap, format);
	if (format)
	{
		while (*format)
		{
			if (*(format) == '%')
			{
				if (!*(format + 1) || *(format + 1) == ' ')
					return (-1);
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

#include <stdarg.h>
#include "main.h"

int check_string(char *);
int check_char(int);
/**
  *_printf - function to give formated output
  *@format: this is the format string
  *Return: count of the output characters
  */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				i++;
				switch (format[i])
				{
					case 'c':
						count += check_char((va_arg(ap, int)));
						break;
					case 's':
						count += check_string(va_arg(ap, char *));
						break;
					default:
						_putchar(format[i]);
						count++;
						break;
				}
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
			i++;
		}
	}
	va_end(ap);
	return (count);
}

/**
  *check - check status of a string
  *@s: input string
  *Return: length of string
  */

int check_string(char *s)
{
	if (!s)
		return (0);
	_puts(s);
	return (_strlen(s));
}

/**
  *check - check status of a character
  *@c: input character
  *Return: 1 or 0
  */

int check_char(int c)
{
	if (!c)
		return (0);
	_putchar(c);
	return (1);
}


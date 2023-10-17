#include <stdarg.h>
#include "main.h"
/**
  *print_format - print the format of the input character
  *@c: The character from which to look up the format
  *@ap: The argument pointer to access the argument to format
  *Return: the count of output characters;
  */
int print_format(char c, va_list ap)
{
	int count = 0;

	if (ap == 0)
		return (-1);

	if (c == 'c')
		count += _putchar(va_arg(ap, int));
	else if (c == 's')
		count += print_str(va_arg(ap, char *));
	else if (c == '%')
		count += _putchar('%');
	else if (c == 'd')
		count += print_number((long)(va_arg(ap, int)), 10);
	else if (c == 'i')
		count += print_number((long)(va_arg(ap, int)), 10);
	else if (c == 'o')
		count += print_number((long)(va_arg(ap, unsigned int)), 8);
	else if (c == 'u')
		count += print_number((long)(va_arg(ap, unsigned int)), 10);
	else if (c == 'b')
		count += print_number((long)(va_arg(ap, unsigned int)), 2);
	else if (c == 'x')
		count += print_number((long)(va_arg(ap, unsigned int)), 16);
	else if (c == 'X')
		count += print_X((long)(va_arg(ap, unsigned int)));
	else
	{
		count += _putchar('%');
		count += _putchar(c);
	}
	return (count);
}

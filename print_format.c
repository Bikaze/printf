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
	char *s;

	if (ap == 0)
		return (-1);

	switch (c)
	{
		case 'c':
			count += _putchar(va_arg(ap, int));
			break;
		case 's':
			s = va_arg(ap, char *);
			if (*s == '\0')
			{
				count += print_str("(null)");
				break;
			}
			else
			{
				count += print_str(s);
			}
			break;
		case '%':
			count += _putchar('%');
			break;
		default:
			count += _putchar('%');
			count += _putchar(c);
			break;
	}
	return (count);
}

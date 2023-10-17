#include "main.h"
/**
  *print_number - prints a number
  *@n: input number (integer)
  *@base: base to print the input number
  *Return: count of the output characters
  */

int print_number(long n, int base)
{
	int count;
	char s[] = "0123456789abcdef";

	if (n < 0)
	{
		_putchar('-');
		return (print_number(-n, base) + 1);
	}
	else if (n > base)
	{
		count = print_number(n / base, base);
		return (count + print_number(n % base, base));
	}
	else
	{
		return (_putchar(s[n]));
	}
}

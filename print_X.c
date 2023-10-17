#include "main.h"
/**
  *print_X - prints a capital hexadecimal number
  *@n: input number (integer)
  *Return: count of the output characters
  */

int print_X(long n)
{
	int count;
	char s[] = "0123456789ABCDEF";

	if (n > 16)
	{
		count = print_X(n / 16);
		return (count + print_X(n % 16));
	}
	else
	{
		return (_putchar(s[n]));
	}
}

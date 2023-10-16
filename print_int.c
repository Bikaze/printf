/**
  *print_int - print integers
  *@n: the number to print
  *@base: the base of the number (base-10, base-8, base-16)
  *Return: count of printed characters
  */
int print_int(long n, int base)
{
	int count;

	char s[] = "0123456789abcdef";
	if (n < 0)
	{
		_putchar('-');
		return (print_int(-n, base) + 1);
	}	
	else if (n > base)
	{
		count = print_int(n/base, base);
		return (count + print_int(n%base, base));
	}
	else
	{
	return (_putchar(s[n]));
	}
}


#include "main.h"
/**
  *print_str - will format the string
  *@str: string argument
  *Return: count of the output characters
  */
int print_str(char *str)
{
	int count = 0;

	if (!str)
		return (0);

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}

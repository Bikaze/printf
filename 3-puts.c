#include "main.h"
/**
  *_puts - program function
  *@str: will be holding a pointer to a string
  *Return: will return nothing
  */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

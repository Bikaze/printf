#include <unistd.h>
/**
  *_putchar - prints a character to the console
  *@c: ascii code of the character
  *Return: count of the output characters
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

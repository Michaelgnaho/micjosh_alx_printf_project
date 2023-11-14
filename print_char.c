#include "main.h"

/**
 * print_char - prints a character.
 * @ap: arguments.
 * Return: an integer.
 */
int print_char(va_list ap)
{
	char b;

	b = va_arg(ap, int);
	_putchar(b);
	return (1);
}

#include "main.h"

/**
 * reverse_str - prints a given string in reverse
 * @ap: arguments
 * Return: the reversed string
 */

int reverse_str(va_list ap)
{

	char *str = va_arg(ap, char*);
	int a;
	int b = 0;

	if (str == NULL)
		str = "(null)";
	while (str[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(str[a]);
	}
	return (b);
}

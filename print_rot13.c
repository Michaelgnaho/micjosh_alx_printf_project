#include "main.h"

/**
 * print_rot13 - prints/converts to rot13
 * @ap: arguments
 * Return: counter
 *
 */

int print_rot13(va_list ap)
{
	int a, b, count = 0;
	int i = 0;
	char *str = va_arg(ap, char*);
	const char Alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	if (str == NULL)
		str = "(null)";
	for (a = 0; str[a]; a++)
	{
		i = 0;
		for (b = 0; Alpha[b] && !i; b++)
		{
			if (str[a] == Alpha[b])
			{
				_putchar(rot13[b]);
				count++;
				i = 1;
			}
		}
		if (!i)
		{
			_putchar(str[a]);
			count++;
		}
	}
	return (count);
}

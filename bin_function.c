#include "main.h"

/**
 * print_binary - prints binary number.
 * @value: parameter
 * @p: pointer to the structure flags.
 * Return: integer
 */
int print_binary(va_list value, flags_b *p)
{
	int flag = 0;
	int count = 0;
	int i, a = 1, b;
	unsigned int j;
	unsigned int n = va_arg(value, unsigned int);

	(void)p;

	for (i = 0; i < 32; i++)
	{
		j = ((a << (31 - i)) & n);
		if (j >> (31 - i))
		{
			flag = 1;
		}
		if (flag)
		{
			b = j >> (31 - i);
			_putchar(b + '0');
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}

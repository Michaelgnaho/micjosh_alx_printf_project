#include "main.h"
/**
 * print_unsigned - prints unsigned integer
 * @ap: argument to print
 * @p: pointer to the structure flags
 * Return: integer
 */

int print_unsigned(va_list ap, flags_b *p)
{
	unsigned int a = va_arg(ap, unsigned int);
	int num, last = a % 10, digit, exp = 1;
	int  b = 1;

	(void)p;

	a = a / 10;
	num = a;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		a = -a;
		last = -last;
		b++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = a;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			b++;
		}
	}
	_putchar(last + '0');

	return (b);
}


/**
 * print_octal - prints an octal number.
 * @value: arguments
 * @p: pointer to the structure flags
 * Return: counter
 */

int print_octal(va_list value, flags_b *p)
{
	int a;
	int *array;
	int count = 0;
	unsigned int n = va_arg(value, unsigned int);
	unsigned int tem = n;

	(void)p;

	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (a = 0; a < count; a++)
	{
		array[a] = tem % 8;
		tem /= 8;
	}
	for (a = count - 1; a >= 0; a--)
	{
		_putchar(array[a] + '0');
	}
	free(array);
	return (count);
}

#include "main.h"

/**
 * print_int - prints integer
 * @ap: argument to print
 * @p: pointer to the structure flags
 * Return: integer
 */

int print_int(va_list ap, flags_b *p)
{
	int a = va_arg(ap, int);
	int b = 1;
	int num, last = a % 10, digit, exp = 1;

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
 * print_dec - prints decimal
 * @ap: argument to print
 * @p: pointer to the structure flags
 * Return: integer
 */

int print_dec(va_list ap, flags_b *p)
{
	int a = va_arg(ap, int);
	int b = 1;
	int num, last = a % 10, digit;
	int exp = 1;

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

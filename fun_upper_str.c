#include "main.h"

/**
 * print_S - prints exclusive string.
 * @ap: parameter.
 * Return: integer.
 */

int print_S(va_list ap)
{
	char *str;
	int a, b, length = 0;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] < 32 || str[a] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			b = str[a];
			if (b < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEX(b);
		}
		else
		{
			_putchar(str[a]);
			length++;
		}
	}
	return (length);
}


/**
 * print_HEX - prints a hexadecimal number.
 * @num: the number to print.
 * Return: count
 */

int print_HEX(unsigned int num)
{
	int a;
	int *array;
	int count = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (a = 0; a < count; a++)
	{
		array[a] = temp % 16;
		temp /= 16;
	}
	for (a = count - 1; a >= 0; a--)
	{
		if (array[a] > 9)
			array[a] = array[a] + 7;
		_putchar(array[a] + '0');
	}
	free(array);
	return (count);
}

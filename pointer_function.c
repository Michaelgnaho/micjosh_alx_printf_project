#include "main.h"

/**
 * print_ptr - prints a hexadecimal number.
 * @ap: arguments
 * @p: pointer to the structure flags
 * Return: counter
 */

int print_ptr(va_list ap, flags_b *p)
{
	void *ptr;
	char *str = "(nil)";
	long int a;
	int b;
	int i;

	(void)p;

	ptr = va_arg(ap, void*);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = print_extra(a);
	return (b + 2);
}


/**
 * print_extra - helper function that prints a hexadecimal number.
 * @n: arguments.
 * Return: counter.
 */

int print_extra(unsigned long int n)
{
	long int a;
	long int *array;
	long int count = 0;
	unsigned long int temp = n;

	while (n / 16 != 0)
	{
		n /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(long int));

	for (a = 0; a < count; a++)
	{
		array[a] = temp % 16;
		temp = temp / 16;
	}
	for (a = count - 1; a >= 0; a--)
	{
		if (array[a] > 9)
		{
			array[a] = array[a] + 39;
		}
		_putchar(array[a] + '0');
	}
	free(array);
	return (count);
}

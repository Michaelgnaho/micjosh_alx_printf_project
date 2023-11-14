#include "main.h"

/**
 * hex_lower - prints lowercase hexadecimal number.
 * @value: arguments.
 * Return: counter.
 */

int hex_lower(va_list value)
{
	int a;
	int *array;
	int count = 0;
	unsigned int n = va_arg(value, unsigned int);
	unsigned int tem = n;

	while (n / 16 != 0)
	{
		n /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (a = 0; a < count; a++)
	{
		array[a] = tem % 16;
		tem /= 16;
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


/**
 * hex_upper - prints uppercase hexadecimal number.
 * @value: arguments.
 * Return: counter.
 */

int hex_upper(va_list value)
{
	int a;
	int *array;
	int count = 0;
	unsigned int n = va_arg(value, unsigned int);
	unsigned int tem = n;

	while (n / 16 != 0)
	{
		n /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (a = 0; a < count; a++)
	{
		array[a] = tem % 16;
		tem /= 16;
	}
	for (a = count - 1; a >= 0; a--)
	{
		if (array[a] > 9)
		{
			array[a] = array[a] + 7;
		}
		_putchar(array[a] + '0');
	}
	free(array);
	return (count);
}

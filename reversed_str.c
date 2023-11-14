#include "main.h"

/**
 * reverse_str - prints a given string in reverse
 * @ap: arguments
 * @p: pointer to the structure flags
 * Return: the reversed string
 */

int reverse_str(va_list ap, flags_b *p)
{
	int i = 0, j;
	char *s = va_arg(ap, char *);

	(void)p;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}

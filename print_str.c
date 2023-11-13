#include "main.h"

/**
 * print_str - prints string
 * @c: a character string
 * Return: number of bytes
 */
int print_str(char *c)
{
	int a = 0;

	if (c)
	{
		for (a = 0; a[c] != '\0'; a++)
		{
			putch(c[a]);
		}
	}
	return (a);
}

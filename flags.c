#include "main.h"

/**
 * flags - indicates flags if _printf finds
 * @s: holder for the flag specifier
 * @p: pointer to the structure flags
 * Return: 1 if a flag is on, 0 otherwise
 */

int flags(char s, flags_b *p)
{
	switch (s)
	{
		case '+':
			p->plus = 1;
			return (1);
		case ' ':
			p->space = 1;
			return (1);
		case '#':
			p->hash = 1;
			return (1);
		default:
			return (0);
	}
}

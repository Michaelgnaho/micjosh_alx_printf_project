#include "main.h"

/**
 * flags - indicates flags if _printf finds
 * @s: holder for the flag specifier
 * @p: pointer to the structure flags
 * Return: 1 if a flag is on, 0 otherwise
 */

int flags(char s, flags_b *p)
{
	int j = 0;

	switch (s)
	{
		case '+':
			p->plus = 1;
			j = 1;
			break;
		case ' ':
			p->space = 1;
			j = 1;
			break;
		case '#':
			p->hash = 1;
			j = 1;
			break;
	}
	return (j);
}

#include "main.h"

/**
 * _strlen - finds the lenght of a string.
 * @str: a string
 * Return: integer.
 */

int _strlen(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);

}



/**
 * _strlenc - finds length of constant characters string
 * @str: a string
 * Return: integer
 */

int _strlenc(const char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);
}

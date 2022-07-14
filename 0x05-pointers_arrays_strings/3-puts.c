#include "main.h"

/**
 * _puts - the function that prints a string
 * @str: string
 *
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

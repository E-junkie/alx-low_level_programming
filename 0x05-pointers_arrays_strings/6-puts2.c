#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 * @str: string
 */
void puts2(char *str)
{
	int n = 0, len = 0;

	while (str[n++])
		len++;

	for (n = 0; n < len; n += 2)
		_putchar(str[n]);

	_putchar('\n');
}

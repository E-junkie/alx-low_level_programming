#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: pointer to the string
 *
 * Return: new line
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != 0)
	{
		n++;
	}
	while (n > 0)
	{
		n--;
		{
			_putchar(s[n]);
		}
	}
	_putchar('\n');
}

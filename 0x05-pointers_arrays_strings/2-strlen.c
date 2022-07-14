#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to the string
 *
 * Return: lengrh of the string
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0';)
		n++;

	return (n);
}

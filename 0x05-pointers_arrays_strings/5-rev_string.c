#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int n = 0, len = 0;
	char tmp;

	while (s[n++])
		len++;

	for (n = len - 1; n >= len / 2; n--)
	{
		tmp = s[n];
		s[n] = s[len - n - 1];
		s[len - n - 1] = tmp;
	}
}

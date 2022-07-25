#include "main.h"

/**
* _strpbrk - a function that searches a string for any of a set of byte
* @s: string to be searched
* @accept: the set of bytes to be searched
*
* Return: a pointer to the matched set
* if not matched return NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}

		s++;
	}

	return ('\0');
}

#include "main.h"

/**
* _strspn - a function that gets the prefix substring
* @s: a string
* @accept: a string
*
* Return: s the number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				p++;
				break;
			}

			else if (accept[x + 1] == '\0')
				return (p);
		}

		s++;
	}

	return (p);
}

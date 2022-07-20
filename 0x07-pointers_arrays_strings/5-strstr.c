#include "main.h"

/**
* _strstr - a function that locates a substring
* @needle: the substring to be searched for
* @haystack: the string to be searched
*
* Return: pointer to needle
* Return: NULL if substring not found
*/
char *_strstr(char *haystack, char *needle)
{
	
	int x;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);

				x++;

			} while (haystack[x] == needle[x]);
		}

		haystack++;
	}

	return ('\0');
}

#include "main.h"

/**
* _strchr - a function that locates a character in a string
* @s: string
* @c: character in the string
*
* Return: pointer to c but Null if character not found
*/
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (*s == c)
		return (s);

	else

		return (0);
}

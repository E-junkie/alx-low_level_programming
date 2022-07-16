#include "main.h"

/**
* _strncpy - function that copies the string
* @dest: array that returns copied string
* @src: the string to be copied
* @n: times it takes to loop
*
* Return:  dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && *(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}
	return (dest);
}

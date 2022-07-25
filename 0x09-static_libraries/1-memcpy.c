#include "main.h"

/**
* _memcpy - s function that copies memory area
* @src: the memory area copied from
* @dest: the memory area copied to
* @n: the length of the operation
*
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		*(dest + p) = *(src + p);
	}
	return (dest);
}

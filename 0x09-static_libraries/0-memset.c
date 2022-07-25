#include "main.h"

/**
* _memset - a function that fills the memory with constant byte
* @s: pointer to the memory
* @n: the first number of bytes of memory the function fills
* @b: constant byte for filling
*
* Return: a pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		*(s + p) = b;
		p++;
	}

	return (s);
}

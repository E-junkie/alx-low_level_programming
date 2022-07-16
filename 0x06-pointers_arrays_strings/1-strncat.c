#include "main.h"

/**
 * _strncat - function that concatenates two string
 * @dest: string
 * @src: string
 * n: number of time it loops
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int p;

	x = 0;
	p = 0;

	while (*(dest + x))
	{
		x++;
	}
	while (p < n)
	{
		((*(dest + x) = *(src + p)));
			x++;
			p++;
	}
	
	return (dest);
}

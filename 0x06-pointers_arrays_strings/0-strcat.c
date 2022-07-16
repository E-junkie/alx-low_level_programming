#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: string
 * @src: string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int x;

	n = 0;
	x = 0;

	while (*(dest + n))
	{
		n++;
	}
	while ((*(dest + n) = *(src + x)))
	{
		n++;
		x++;
	}
	return (dest);
}

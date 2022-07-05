#include <stdio.h>

/**
 * main - Entry point
 * prints all single digit number of base 10
 * using putchar to print
 * Return: 0 is successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}

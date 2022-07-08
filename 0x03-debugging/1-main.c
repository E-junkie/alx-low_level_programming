#include <stdio.h>

/**
 * main - cause an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("incoming infinite loop :(\n");

	i = 0;
/*
 * don't delete it
	while (i < 10)
	{
		putchar(i);
	}
*/
	printf("infinite loop avoided! //o\n");

	return (0);
}


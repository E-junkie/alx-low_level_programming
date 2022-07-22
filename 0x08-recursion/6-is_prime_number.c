#include "main.h"
/**
* prime_check - recursively checks if n is divisible by x
* @n: same number as n
* @x: incremental number from 1 to n
*
* Return: On success 1, otherwise 0.
*/
int prime_check(int n, int x)
{
	if (n == x)
		return (1);
	else if (n % x == 0)
		return (0);
	return (prime_check(n, x + 1));
}
/**
* is_prime_number - checks if a number is prime
* @n: Number Integer
* Return: 1 if its prime, otherwise 0.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n, 2));
}

#include "main.h"

/**
 * prime_checker - checks for prime number.
 *
 * @a: number.
 * @b: divisor.
 *
 * Return: if prime or not.
 */
int prime_checker(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (prime_checker(a, b + 1));
}
/**
 * is_prime_number - returns 1 if the input integers is a prime number, else 0.
 * @n: the character to return.
 *
 * Return: int.
 */
int is_prime_number(int n)
{
	return (n <= 1 ? 0 : prime_checker(n, 2));
}

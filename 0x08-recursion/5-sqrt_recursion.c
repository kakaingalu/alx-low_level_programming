#include "main.h"
/**
 * _number - help find squareroot.
 * @a: the number to find squareroot
 * @x: squareroot.
 *
 * Return: squareroot of the number
 */
int _number(int a, int x)
{
	if ((x * x) == a)
	{
		return (x);
	}
	else if ((x * x) > a)
	{
		return (-1);
	}
	return (_number(a, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the character to return its square root.
 *
 * Return: int.
 */
int _sqrt_recursion(int n)
{
	return (_number(n, 1));
}
